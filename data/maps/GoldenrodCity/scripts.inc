GoldenrodCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_OnTransition
	.byte 0

GoldenrodCity_OnTransition::
setflag FLAG_VISITED_GOLDENROD_CITY
end

GoldenrodCity1::
lock     
faceplayer     
msgbox GoldenrodCity_Text_1, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_1:
	.string "Let's modernize this GYM once and for\n"
	.string "all.$"



GoldenrodCity2::
lock     
faceplayer     
msgbox GoldenrodCity_Text_2, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_2:
	.string "CLEFAIRY will be the roster of the new\n"
	.string "GYM, it is so cute.$"



GoldenrodCity3::
lock     
faceplayer     
msgbox GoldenrodCity_Text_3, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_3:
	.string "This initiative will unite KANTO and\n"
	.string "JOHTO like never before.$"



GoldenrodCity4::
lock     
faceplayer     
msgbox GoldenrodCity_Text_4, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_4:
	.string "They told me that there's a really\n"
	.string "strong LEADER here in the city who still\l"
	.string "accepts challengers, but it seems like\l"
	.string "the city doesn't like her image so she's\l"
	.string "going to retire soon.$"



GoldenrodCity5::
lock     
faceplayer     
msgbox GoldenrodCity_Text_5, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_5:
	.string "It's said SAFFRON and GOLDENROD are\n"
	.string "going to be connected by these train\l"
	.string "tracks. After all the tensions that\l"
	.string "have occurred, it's hard to believe, but\l"
	.string "here they are, being built.$"



GoldenrodCity6::
lock     
faceplayer     
msgbox GoldenrodCity_Text_6, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_6:
	.string "I want to get into the GAME CORNER,\n"
	.string "they sell some amazing POKÉMON, but…\l"
	.string "They won't let me in because I'm too\l"
	.string "young!$"



GoldenrodCity7::
lock     
faceplayer     
msgbox GoldenrodCity_Text_7, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_7:
	.string "There's nothing like watering your\n"
	.string "plants on a hot summer day, but be\l"
	.string "careful. If you water a SUDOWOODO, it\l"
	.string "will become angry and attack!$"



GoldenrodCity8::
lock     
faceplayer     
msgbox GoldenrodCity_Text_8, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_8:
	.string "Our DEPARTMENT STORE's offer is\n"
	.string "unmatched in the entire region; that's\l"
	.string "the privilege of belonging to the upper\l"
	.string "class. Hohoho!$"



GoldenrodCity9::
end



GoldenrodCity10::
end



GoldenrodCity11::
lock     
faceplayer     
msgbox GoldenrodCity_Text_11, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_11:
	.string "This city is devouring everything\n"
	.string "around it; soon, the little green left in\l"
	.string "it will also turn into asphalt. And I\l"
	.string "won't be able to fish here!$"



GoldenrodCity12::
end



GoldenrodCity13::
lock        
msgbox GoldenrodCity_Text_13, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_13:
	.string "Look, CLEFAIRY, when I come back from\n"
	.string "MOO-MOO FARM, we will become GYM\l"
	.string "LEADERS. GOLDENROD wants a cool and\l"
	.string "powerful leader. You're cool, but we\l"
	.string "need something powerful.$"



GoldenrodCity14::
end



GoldenrodCity15::
lock     
faceplayer     
msgbox GoldenrodCity_Text_15, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_15:
	.string "The RADIO TOWER has attracted a lot of\n"
	.string "people lately; they say it's the SILPH\l"
	.string "of JOHTO.$"



GoldenrodCity16::
lock     
faceplayer     
msgbox GoldenrodCity_Text_16, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_16:
	.string "This city has changed so much in such a\n"
	.string "short period that I no longer know\l"
	.string "where anything is!$"




GoldenrodCity17::
lock     
faceplayer     
msgbox GoldenrodCity_Text_17, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_17:
	.string "In 3 years, we've turned GOLDENROD CITY\n"
	.string "into the economic and\l"
	.string "telecommunications hub of all JOHTO.\l"
	.string "Just imagine what we can do in other 3!$"



GoldenrodCity18::
lock     
faceplayer     
msgbox GoldenrodCity_Text_18, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_18:
	.string "The train track construction has\n"
	.string "temporarily divided the city into two\l"
	.string "parts. To reach the other side, you'll\l"
	.string "have to take the underground tunnels.$"


GoldenrodCity19::
lock     
faceplayer     
msgbox GoldenrodCity_Text_19, MSGBOX_DEFAULT
release     
end

GoldenrodCity_Text_19:
.string "You shouldn't be here.\n"
.string "This place can be dangerous!$"



GoldenrodCity_EventScript_Obrero::
	trainerbattle_single TRAINER_LILA_AND_ROY_5, GoldenrodCity_Text_ObreroIntro, GoldenrodCity_Text_ObreroDefeated
	msgbox GoldenrodCity_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodCityDocumento_100::
msgbox GoldenrodCityDocumento_Text_100, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_100:
	.string "GOLDENROD CITY RADIO TOWER$"



GoldenrodCityDocumento_101::
msgbox GoldenrodCityDocumento_Text_101, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_101:
	.string "UNDERGROUND NORTH ENTRANCE$"



GoldenrodCityDocumento_102::
msgbox GoldenrodCityDocumento_Text_102, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_102:
	.string "UNDERGROUND SOUTH ENTRANCE$"



GoldenrodCityDocumento_103::
msgbox GoldenrodCityDocumento_Text_103, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_103:
	.string "GOLDENROD CITY\n"
	.string "The Festive City of Opulent Charm$"



GoldenrodCityDocumento_104::
msgbox GoldenrodCityDocumento_Text_104, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_104:
.string "ROUTE 35 and NATIONAL PARK to the north.$"



GoldenrodCityDocumento_105::
msgbox GoldenrodCityDocumento_Text_105, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_105:
.string "Your Playground!\n"
	.string "GOLDENROD CITY GAME CORNER$"



GoldenrodCityDocumento_106::
msgbox GoldenrodCityDocumento_Text_106, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_106:
	.string "The world is a bike path!\n"
	.string "BIKE SHOP$"



GoldenrodCityDocumento_107::
msgbox GoldenrodCityDocumento_Text_107, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_107:
	.string "GOLDENROD CITY POKÉMON GYM\n"
	.string "LEADER: VALERIA\l"
	.string "The strongest and bravest girl\l"
	.string "on GOLDENROD!$"



GoldenrodCityDocumento_108::
msgbox GoldenrodCityDocumento_Text_108, MSGBOX_SIGN   
end

GoldenrodCityDocumento_Text_108:
	.string "Blooming Beautiful\n"
	.string "FLOWER SHOP$"
