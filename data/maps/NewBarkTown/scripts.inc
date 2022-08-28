NewBarkTown_MapScripts::
	.byte 0

NewBarkTown1::
lock     
faceplayer     
msgbox NewBarkTown_Text_1, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_1:
.string "Ya hemos construido la base del\n"
.string "pueblo, ahora queda lo más\l"
.string "difícil. Confiamos en que OAK nos\l"
.string "ayude con la IA.$"


NewBarkTown2::
lock     
faceplayer     
msgbox NewBarkTown_Text_2, MSGBOX_DEFAULT
release     
end

NewBarkTown_Text_2:
.string "¡Y en menos de 3 años, todo listo\n"
.string "para iniciar el SHOW DE TRUMAN!\l"
.string "¡Oh, perdón!\l"
.string "¡No debí decir eso!$"

NewBarkTown3::
end
