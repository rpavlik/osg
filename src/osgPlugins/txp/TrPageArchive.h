/* **************************************************************************
 * OpenSceneGraph loader for Terrapage format database
 * by Boris Bralo 2002
 *
 * based on/modifed  sgl (Scene Graph Library) loader by Bryan Walsh
 *
 * This loader is based on/modified from Terrain Experts Performer Loader,
 * and was ported to SGL by Bryan Walsh / bryanw at earthlink dot net
 *
 * That loader is redistributed under the terms listed on Terrain Experts
 * website (www.terrex.com/www/pages/technology/technologypage.htm)
 *
 * "TerraPage is provided as an Open Source format for use by anyone...
 * We supply the TerraPage C++ source code free of charge.  Anyone
 * can use it and redistribute it as needed (including our competitors).
 * We do, however, ask that you keep the TERREX copyrights intact."
 *
 * Copyright Terrain Experts Inc. 1999.
 * All Rights Reserved.
 *
 *****************************************************************************/

#ifndef _TRPAGEARCHIVE_H_
#define _TRPAGEARCHIVE_H_



#include "trpage_sys.h"
#include "trpage_read.h"

#include "TrPageParser.h"

#include <osg/GeoSet>

#include <string>
#include <vector>
#include <memory> // for auto_ptr

namespace txp
{
    /// main class for loading terrapage archives  
    class TrPageArchive : public trpgr_Archive
    {
    public:
        TrPageArchive();
        
        ~TrPageArchive();
        
        // open archive file
        virtual bool OpenFile(const char* file);
        
        /// Load and create textures and materials
        void LoadMaterials();

        // Load and create models, usualy OpenFlight models
        bool LoadModels();
        
        /** Load a TXP tile and 
        @param x Tile location input - x dimension.
        @param y Tile location input - y dimension.
        @param lod Tile LOD level input.
        @return The parent ID of this tile to let you hook it into the scene
                graph.

        x, y dimensions are not coordinates, they are tile numbers. For example,
        for combination 10, 1 and lod number 2 terrapage opens file tile_10_1_2.tpt 
        in directory of the archive. This is THE method which shoud be used once 
        paging is implemented.

        */
        osg::Group *LoadTile(int x,int y,int lod,int &parent);
        
        /** Load all the tiles . No paging.
        @return The parent of the complete scene graph.
        */
        osg::Group *LoadAllTiles();

    protected:
        /// This class does most of the actual parsing. 
        std::auto_ptr<TrPageParser> parse;
        //  Texture, material, and model lists.
        std::vector< osg::ref_ptr<osg::Texture> >   m_textures;
        std::vector< osg::ref_ptr<osg::StateSet> >  m_gstates;
        std::vector< osg::ref_ptr<osg::Node> >      m_models;
        std::string   m_alternate_path;
    };
}; // end namespace

#endif
