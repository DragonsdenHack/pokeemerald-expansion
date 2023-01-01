AzaleaTown_MapScripts::
	.byte 0

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
.string "Si sigues más al oeste encontrarás\n"
.string "EL ENCINAR.\l"
.string "¡Dicen que su guardián aparecerá\l"
.string "para castigar a todo el que\l"
.string "intente dañar el lugar!$"



AzaleaTown4::
end



AzaleaTown5::
lock     
faceplayer     
msgbox AzaleaTown_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_5:
.string "Mi abuelito me ha prometido que\n"
.string "pronto dejará el GIMNASIO y podrá\l"
.string "estar en casa todo el día haciendo\l"
.string "BONGURIS y jugando conmigo.\l"
.string "¡Qué ganas tengo!$"


AzaleaTown6::
lock     
faceplayer     
msgbox AzaleaTown_Text_6, MSGBOX_DEFAULT
release     
end

AzaleaTown_Text_6:
.string "CÉSAR tiene ya 65 años, es\n"
.string "increíble lo rápido que pasa el\l"
.string "tiempo. Cada vez le cuesta más\l"
.string "bajar las escaleras del POZO\l"
.string "SLOWPOKE.\l"
.string "¡Un día de estos va a hacerse daño\l"
.string "con ellas!$"



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
.string "CÉSAR no quiere reconocerlo, pero\n"
.string "es con diferencia el mayor\l"
.string "especialista del TIPO BICHO que\l"
.string "hay en JOHTO. A diferencia de ese\l"
.string "jóven ANTÓN, prefiere mantener sus\l"
.string "dotes como ENTRENADOR en el\l"
.string "anonimato.$"



AzaleaTown10::
end



AzaleaTown11::
end



AzaleaTownDocumento_100::
msgbox AzaleaTownDocumento_Text_100, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_100:
.string "El ENCINAR\n"
	.string "Respeta al bosque y el bosque te\l"
	.string "respetará a ti.$"



AzaleaTownDocumento_101::
msgbox AzaleaTownDocumento_Text_101, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_101:
.string "CASA DE CÉSAR$"



AzaleaTownDocumento_102::
msgbox AzaleaTownDocumento_Text_102, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_102:
.string "GIMNASIO de PUEBLO AZALEA\n"
	.string "LÍDER: CÉSAR\l"
	.string "¡El último superviviente de la\l"
	.string "JOHTO más rústica y tradicional!$"



AzaleaTownDocumento_103::
msgbox AzaleaTownDocumento_Text_103, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_103:
.string "CASA DEL CARBONERO$"



AzaleaTownDocumento_104::
msgbox AzaleaTownDocumento_Text_104, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_104:
.string "PUEBLO AZALEA\n"
	.string "Donde la gente y los POKÉMON viven\l"
	.string "en feliz armonía.$"



AzaleaTownDocumento_105::
msgbox AzaleaTownDocumento_Text_105, MSGBOX_SIGN   
end

AzaleaTownDocumento_Text_105:
	.string "POZO SLOWPOKE\n"
	.string "También conocido como POZO LLUVIA.\l"
	.string "Los nativos creen que el BOSTEZO\l"
	.string "de SLOWPOKE invoca la lluvia.\l"
	.string "Hace 400 años un BOSTEZO de\l"
	.string "SLOWPOKE acabó con una sequía.$"



AzaleaTownDocumento_106::
lock      
playmoncry SPECIES_SLOWPOKE, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_106, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_106:
.string "...\n"
	.string "...\l"
	.string "(Está holgazaneando).$"



AzaleaTownDocumento_107::
lock      
playmoncry SPECIES_SLOWBRO, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_107, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_107:
.string "...\n"
	.string "...\l"
	.string "(Está holgazaneando).$"



AzaleaTownDocumento_108::
lock      
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_108, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_108:
.string "PIDGEOT: ¡Bi bibii!$"



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
.string "MACHOP: ¡Chop! ¡Chop!$"



AzaleaTownDocumento_111::
lock    
faceplayer  
playmoncry SPECIES_POLIWRATH, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_111, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_111:
.string "POLIWRATH: ¡Poli, poli!$"


AzaleaTownDocumento_112::
lock    
faceplayer  
playmoncry SPECIES_DODUO, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_112, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_112:
.string "DODUO: ¡Dodu, odudodu!$"



AzaleaTownDocumento_113::
lock    
playmoncry SPECIES_CLEFAIRY, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_113, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_113:
.string "CLEFAIRY: ¡¡faaa!!$"



AzaleaTownDocumento_114::
lock    
faceplayer
playmoncry SPECIES_PIKACHU, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_114, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_114:
.string "PIKACHU: ¡¡Pikaaa!!$"



AzaleaTownDocumento_115::
lock   
faceplayer   
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_115, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_115:
.string "PIDGEOT: ¡Bi bibii!$"



AzaleaTownDocumento_116::
lock   
faceplayer   
playmoncry SPECIES_SPEAROW, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_116, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_116:
.string "SPEAROW: ¡¡Roooooww!!$"



AzaleaTownDocumento_117::
lock   
faceplayer   
playmoncry SPECIES_PIDGEY, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_117, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_117:
.string "PIDGEY: ¡¡Geyyyyy!!$"



AzaleaTownDocumento_118::
lock   
faceplayer   
playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_118, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_118:
.string "MILTANK: ¡¡Taaank!!$"



AzaleaTownDocumento_119::
lock    
playmoncry SPECIES_MILTANK, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_119, MSGBOX_DEFAULT
release     
end

AzaleaTownDocumento_Text_119:
.string "MILTANK: ¡¡Taaank!!$"



AzaleaTownDocumento_120::
lock    
faceplayer
playmoncry SPECIES_MEOWTH, CRY_MODE_ENCOUNTER
msgbox AzaleaTownDocumento_Text_120, MSGBOX_NPC
release     
end

AzaleaTownDocumento_Text_120:
.string "MEOWTH: ¡meowth!$"
