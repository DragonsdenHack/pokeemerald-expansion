Route2_Path2_MapScripts::
	.byte 0

Route2Path2_1::
lock     
faceplayer     
msgbox Route2_Path2_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Path2_Text_1:
.string "RATTATA puede que sea pequeño,\n"
.string "pero nunca subestimes su potente\l"
.string "mordedura, creo que tu\l"
.string "organización lo sabe mejor que\l"
.string "nadie, ¿verdad?$"



Route2Path2_2::
lock     
faceplayer     
msgbox Route2_Path2_Text_2, MSGBOX_DEFAULT
release     
end

Route2_Path2_Text_2:
.string "Este bosque ha visto dar sus\n"
.string "primeros pasos a muchas leyendas,\l"
.string "¡ténle un poco de respeto!$"
