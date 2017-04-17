#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          	SPAWNTYPE      	LINK        SYNC   	OBJECTS   	DEPEND   	DEPQTY 	ZONE_DESC
{ 0, 0, 			0,    			{}, 		{},     	{0},      	{},      	0,     	},
// You must not link first flags to attacking side's XRAY base for A&D, otherwise game ends after first flag.
{ 1, TEAM_BLUE    , SPAWN_XRAY,     {}          , {}   	     ,{0}      , {}        , 0    , "Jordan Main Base" },
{ 2, TEAM_RED	  , SPAWN_XRAY,     {3}   	, {} 	     ,{0}      , {}        , 0    , "Insurgent Main Base" },
{ 3, TEAM_BLUE    , SPAWN_NEVER,    {4,5}  	, {} 	     ,{0}      , {}        , 0    , "Military Base South" },
{ 4, TEAM_BLUE    , SPAWN_NEVER,    {6}  		, {5}	     ,{0}      , {}        , 0    , "Yarum West" },
{ 5, TEAM_BLUE    , SPAWN_NEVER,    {6}    	    , {4}	     ,{0}      , {}        , 0    , "Yarum East" },
{ 6, TEAM_BLUE    , SPAWN_NEVER,    {7}         , {}          ,{0}      , {}        , 0    , "Zargabad South" },
{ 7, TEAM_BLUE    , SPAWN_NEVER,    {8}         , {}         ,{0}      , {}        , 0    , "Zargabad Center" },
{ 8, TEAM_BLUE    , SPAWN_NEVER,    {9}         , {}   	     ,{0}      , {}        , 0    , "Zargabad North" },

{ 9, TEAM_BLUE   , SPAWN_NEVER,     {1}          , {}     	 ,{0}     , {}       , 0    , "Military base North" },


{ 10, TEAM_BLUE   , SPAWN_INSTANT,    {}          , {}  	     ,{0}      , {1,8}       , 2    , "FB North" },

{ 11, TEAM_BLUE   , SPAWN_INSTANT,    {}          , {}  	     ,{0}      , {1,6}       , 2    , "FB West" },
{ 12, TEAM_BLUE   , SPAWN_INSTANT,    {}          , {}  	     ,{0}      , {1,-2,4,5}       , 3    , "FB East" },

{ 13, TEAM_RED    , SPAWN_NEVER,    {}         , {}         ,{0}      , {2,8}        , 2    , "" },
{ 14, TEAM_BLUE   , SPAWN_INSTANT,    {}          , {}  	     ,{0}      , {1,7}       , 2    , "FB Center" }

};


