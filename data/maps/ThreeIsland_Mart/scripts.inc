ThreeIsland_Mart_MapScripts::
	.byte 0

ThreeIslandMart1::
end



ThreeIslandMart2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¿De verdad?\p"
.string "¿Seguro que el CENTRO COMERCIAL\n"
.string "de AZULONA es mucho mayor que\l"
.string "esta tienda?$"



ThreeIslandMart3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Los MOTORISTAS han estado a punto\n"
.string "de destrozar la TIENDA POKéMON.\p"
.string "Menos mal que se han ido.$"



ThreeIslandMart4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "A veces compro medicinas aquí.\p"
.string "Pero hay mucha gente que cura a\n"
.string "los POKéMON con BAYAS del BOSQUE\l"
.string "BAYA.\p"
.string "Hombre, yo lo entiendo; las BAYAS\n"
.string "son gratis y nunca se acaban.$"
