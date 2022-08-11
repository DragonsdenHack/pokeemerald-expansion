ThreeIsland_House4_MapScripts::
	.byte 0

ThreeIslandHouse4-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "Que no se te ocurra ir nunca al\n"
.string "BOSQUE BAYA sin compañía.\p"
.string "¡Está lleno de fantasmas!$"



ThreeIslandHouse4-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¡Mi padre me cuenta unas historias\n"
.string "que no se las cree ni él!\l"
.string "¡Y no me deja salir a jugar!$"
