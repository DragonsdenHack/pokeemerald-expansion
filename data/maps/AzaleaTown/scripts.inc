AzaleaTown_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_OnTransition
	.byte 0

AzaleaTown_OnTransition::
setflag FLAG_VISITED_AZALEA_TOWN
end

AzaleaTown1::
end



AzaleaTown2::
lock     
faceplayer     
msgbox AzaleaTown_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_2:
.string "El GIMNASIO queda reservado para\n"
.string "disípulos de CÉSAR. Tal y\l"
.string "como está el asunto no tiene\l"
.string "responsabilidad alguna de poner en\l"
.string "juego su MEDALLA.\l"
.string "A no ser que cuentes con una\l"
.string "invitación expresa, no puedo\l"
.string "dejarte entrar.$"



AzaleaTown3::
lock     
faceplayer     
msgbox AzaleaTown_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_3:
	.string "If you go further west, you will find\n"
	.string "the ILEX FOREST. It's said a guardian\l"
	.string "will appear to punish anyone who tries\l"
	.string "to harm the place!$"




AzaleaTown4::
end



AzaleaTown5::
lock     
faceplayer     
msgbox AzaleaTown_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_5:
	.string "My grandfather has promised me that\n"
	.string "he'll soon retire from the GYM and be\l"
	.string "able to stay home all day making\l"
	.string "BONGURIS and playing with me. I'm so\l"
	.string "excited for it!$"



AzaleaTown6::
lock     
faceplayer     
msgbox AzaleaTown_Text_6, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_6:
	.string "KURT is already 65 years old, time flies\n"
	.string "so quickly. It's becoming harder and\l"
	.string "harder for him to go down the stairs of\l"
	.string "the SLOWPOKE WELL. One of these days,\l"
	.string "he's going to get hurt with them!$"




AzaleaTown7::
end



AzaleaTown8::
end



AzaleaTown9::
lock     
faceplayer     
msgbox AzaleaTown_Text_9, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_9:
	.string "KURT doesn't want to admit it, but he's\n"
	.string "by far the greatest BUG-type\l"
	.string "specialist in JOHTO. Unlike that young\l"
	.string "BUGSY, he prefers to keep his skills in\l"
	.string "secret.$"




AzaleaTown10::
end



AzaleaTown11::
end



AzaleaTownDocumento_100::
msgbox AzaleaTownDocumento_Text_100, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_100:
.string "ILEX FOREST\n"
	.string "Honor the forest,\l"
	.string "and it will honor you.$"



AzaleaTownDocumento_101::
msgbox AzaleaTownDocumento_Text_101, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_101:
.string "KURT'S HOUSE$"



AzaleaTownDocumento_102::
msgbox AzaleaTownDocumento_Text_102, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_102:
.string "AZALEA TOWN GYM\n"
	.string "LEADER: KURT\l"
	.string "Last survivor from the\l"
	.string "rustic and traditional JOHTO!$"



AzaleaTownDocumento_103::
msgbox AzaleaTownDocumento_Text_103, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_103:
.string "CHARCOAL KILN$"



AzaleaTownDocumento_104::
msgbox AzaleaTownDocumento_Text_104, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_104:
.string "AZALEA TOWN\n"
	.string "Where People and POKÉMON\l"
	.string "live in Happy Harmony.$"



AzaleaTownDocumento_105::
msgbox AzaleaTownDocumento_Text_105, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_105:
	.string "SLOWPOKE WELL\n"
	.string "Also known as the RAINMAKER WELL.\l"
	.string "Locals believe that a SLOWPOKE's\l"
	.string "yawn summons rain.\l"
	.string "Records show that a SLOWPOKE's yawn\l"
	.string "ended a drought 400 years ago.$"



AzaleaTownDocumento_106::
lock      
playmoncry SPECIES_SLOWPOKE, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_106, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_106:
.string "…\n"
	.string "…\l"
	.string "(It's slacking off!).$"



AzaleaTownDocumento_107::
lock      
playmoncry SPECIES_SLOWBRO, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_107, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_107:
.string "…\n"
	.string "…\l"
	.string "(It's slacking off!).$"



AzaleaTownDocumento_108::
lock      
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_108, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_108:
.string "PIDGEOT: Bi bibii!$"



AzaleaTownDocumento_109::
lock      
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_109, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_109:
.string "MOLTRES: Trees!$"



AzaleaTownDocumento_110::
lock    
faceplayer  
playmoncry SPECIES_MACHOP, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_110, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_110:
.string "MACHOP: Chop! Chop!$"



AzaleaTownDocumento_111::
lock    
faceplayer  
playmoncry SPECIES_POLIWRATH, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_111, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_111:
.string "POLIWRATH: Poli, poli!$"


AzaleaTownDocumento_112::
lock    
faceplayer  
playmoncry SPECIES_DODUO, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_112, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_112:
.string "DODUO: Dodu, odudodu!$"



AzaleaTownDocumento_113::
lock    
playmoncry SPECIES_CLEFAIRY, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_113, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_113:
.string "CLEFAIRY: Faaa!!$"



AzaleaTownDocumento_114::
lock    
faceplayer
playmoncry SPECIES_PIKACHU, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_114, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_114:
.string "PIKACHU: Pikaaa!!$"



AzaleaTownDocumento_115::
lock   
faceplayer   
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_115, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_115:
.string "PIDGEOT: Bi bibii!$"



AzaleaTownDocumento_116::
lock   
faceplayer   
playmoncry SPECIES_SPEAROW, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_116, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_116:
.string "SPEAROW: Roooooww!!$"



AzaleaTownDocumento_117::
lock   
faceplayer   
playmoncry SPECIES_PIDGEY, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_117, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_117:
.string "PIDGEY: Geyyyyy!!$"



AzaleaTownDocumento_118::
lock   
faceplayer   
playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_118, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_118:
.string "MILTANK: Taaank!!$"



AzaleaTownDocumento_119::
lock    
playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_119, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_119:
.string "MILTANK: Taaank!!$"



AzaleaTownDocumento_120::
lock    
faceplayer
playmoncry SPECIES_MEOWTH, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_120, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_120:
.string "MEOWTH: meowth!$"



AzaleaTownDocumento_121::
lock    
faceplayer
playmoncry SPECIES_AMPHAROS, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_121, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_121:
.string "AMPHAROS: Amph!\n"
	.string "(Su cola irradia una gran energía).$"



AzaleaTownDocumento_122::
lock    
faceplayer
playmoncry SPECIES_DRATINI, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_122, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_122:
.string "DRATINI: Drag!$"



AzaleaTownDocumento_123::
lock    
faceplayer
playmoncry SPECIES_NIDORAN_F, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_123, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_123:
.string "NIDORAN: Dan!$"

AzaleaTownDocumento_JIGGLYPUFF::
lock    
faceplayer
playmoncry SPECIES_JIGGLYPUFF, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_JIGGLYPUFF, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_JIGGLYPUFF:
.string "JIGGLYPUFF: Puff!$"



AzaleaTownDocumento_124::
lock    
faceplayer
playmoncry SPECIES_NIDORINO, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_124, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_124:
.string "NIDORINO: Nidor!$"



AzaleaTownDocumento_125::
lock    
faceplayer
playmoncry SPECIES_NIDORAN_M, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_125, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_125:
.string "NIDORAN: Dan!$"



AzaleaTownDocumento_126::
lock    
faceplayer
playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_126, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_126:
.string "PSYDUCK: Psydu!$"



AzaleaTownDocumento_127::
lock    
faceplayer
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_127, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_127:
.string "CUBONE: Cubon!$"



AzaleaTownDocumento_128::
lock    
faceplayer
playmoncry SPECIES_CHANSEY, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_128, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_128:
.string "CHANSEY: Chaan! Chaan!$"



AzaleaTownDocumento_129::
lock    
faceplayer
playmoncry SPECIES_FEAROW, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_129, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_129:
.string "FEAROW: Fea, row, row!$"



AzaleaTownDocumento_130::
lock    
faceplayer
playmoncry SPECIES_WIGGLYTUFF, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_130, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_130:
.string "WIGGLYTUFF: Wig, tuuuf, tuuuf!$"



AzaleaTownDocumento_131::
lock    
faceplayer
playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_131, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_131:
.string "MACHOKE: Cho! Chokecho!$"



AzaleaTownDocumento_132::
lock    
faceplayer
playmoncry SPECIES_SEEL, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_132, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_132:
.string "SEEL: Eel!$"



AzaleaTownDocumento_133::
lock    
playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_133, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_133:
.string "(Seems like this SNORLAX is resting\n"
	.string "here since a long time ago…)$"

AzaleaTown_Encuentro_Mirto::
lock
playse SE_EXIT
addobject 11
clearflag FLAG_HIDE_ROUTE_110_BIRCH
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_Encuentro_Mirto_Move_1
waitmovement 0x0
delay 15
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_2
waitmovement 0x0
msgbox AzaleaTown_Encuentro_Mirto_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_3
waitmovement 0x0
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_4
waitmovement 0x0
delay 10
fadeoutbgm 0
playse 566
msgbox AzaleaTown_Encuentro_Mirto_Texto_2 MSGBOX_AUTOCLOSE
delay 40
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_5
waitmovement 0x0
msgbox AzaleaTown_Encuentro_Mirto_Texto_3 MSGBOX_AUTOCLOSE
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_6
waitmovement 0x0
msgbox AzaleaTown_Encuentro_Mirto_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_5
waitmovement 0x0
msgbox AzaleaTown_Encuentro_Mirto_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, AzaleaTown_Encuentro_Mirto_Move_7
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_110_BIRCH
removeobject 11
fadeoutbgm 0
playse MUS_RG_SEVII_45
setvar VAR_UNUSED_0x40F7, 128
release
end

AzaleaTown_Encuentro_Mirto_Texto_1:
.string "????: No está aquí, debe\n"
	.string "encontrarse en su casa de PUEBLO\l"
	.string "AZALEA.$"

AzaleaTown_Encuentro_Mirto_Texto_2:
.string "????: Tú tampoco tienes pinta de\n"
	.string "ser de por aquí, ¿verdad?$"

AzaleaTown_Encuentro_Mirto_Texto_3:
.string "????: Pareces un buen ENTRENADOR.\n"
	.string "Estaría encantado de conversar\l"
	.string "contigo, pero tendrás que\l"
	.string "disculparme.$"

AzaleaTown_Encuentro_Mirto_Texto_4:
.string "????: He viajado desde muy lejos\n"
	.string "por los avanzados conocimientos en\l"
	.string "medicina que esta región ha tenido\l"
	.string "desde siempre.$"

AzaleaTown_Encuentro_Mirto_Texto_5:
.string "Es lo único que puede salvar a mi\n"
	.string "POKÉMON, mi última esperanza.$"

AzaleaTown_Encuentro_Mirto_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

AzaleaTown_Encuentro_Mirto_Move_2:
face_up
step_end

AzaleaTown_Encuentro_Mirto_Move_3:
face_down
emote_exclamation_mark
step_end

AzaleaTown_Encuentro_Mirto_Move_4:
walk_down
walk_down
walk_down
step_end

AzaleaTown_Encuentro_Mirto_Move_5:
walk_in_place_down
step_end

AzaleaTown_Encuentro_Mirto_Move_6:
face_left
step_end

AzaleaTown_Encuentro_Mirto_Move_7:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end


AzaleaTownDocumento_Kabuto::
lock    
playmoncry SPECIES_KABUTO, CRY_MODE_ENCOUNTER
waitmoncry
msgbox AzaleaTownDocumento_Text_Kabuto, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_Kabuto:
	.string "(The POKÉMON appears to be digging a\n"
	.string "tunnel to escape).$"

AzaleaTownDocumento_Omanyte::
lock    
playmoncry SPECIES_OMANYTE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox AzaleaTownDocumento_Text_Omanyte, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_Omanyte:
	.string "(This POKÉMON is currently extinct. It\n"
	.string "doesn't appear to be in its natural\l"
	.string "habitat).$"

AzaleaTownDocumento_Machoke::
lock
faceplayer   
playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox AzaleaTownDocumento_Text_Machoke, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_Machoke:
	.string "(This MACHOKE thoroughly enjoys\n"
	.string "playing with those rocks).$"

AzaleaTownDocumento_Lapras::
lock
faceplayer   
playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox AzaleaTownDocumento_Text_Lapras, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_Lapras:
	.string "(This LAPRAS doesn't move very\n"
	.string "gracefully. This place might be too\l"
	.string "small for it).$"

AzaleaTownDocumento_Pidgeot::
lock
faceplayer   
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
msgbox AzaleaTownDocumento_Text_Pidgeot, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_Pidgeot:
	.string "(It's a PIDGEOT. It appears healthy,\n"
	.string "athletic, strong, and with a triumphant\l"
	.string "appearance).$"

AzaleaTownDocumento_Chansey::
lock
faceplayer   
playmoncry SPECIES_CHANSEY, CRY_MODE_ENCOUNTER
waitmoncry
msgbox AzaleaTownDocumento_Text_Chansey, MSGBOX_NPC
msgbox AzaleaTownDocumento_Text_Chansey_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Chansey_3No
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
release     
end

AzaleaTownDocumento_Text_Chansey:
	.string "It appears that this CHANSEY wants to\n"
	.string "heal your POKÉMON.$"

AzaleaTownDocumento_Text_Chansey_YesNo:
.string "Do you let the CHANSEY heal your team?$"

Chansey_3No::
release
end

Maquina_Primavera_Cura::
lock
msgbox Maquina_Primavera_Cura_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Chansey_3No
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
release     
end

Maquina_Primavera_Cura_YesNo:
.string "Do you want to heal your team?$"




