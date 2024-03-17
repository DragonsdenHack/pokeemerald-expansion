Route49_Pagoda_P8_MapScripts::
	.byte 0


Route49_Pagoda_P8_Primer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Primer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Primer_Pensador_Texto_1:
	.string "There's some concern about\n"
	.string "generational shift; the path of the\l"
	.string "sage is no longer deemed necessary.\l"
	.string "Curiosity and restlessness drove all of\l"
	.string "us who made it here, something that's\l"
	.string "scarce nowadays.$"

Route49_Pagoda_P8_Segundo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Segundo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Segundo_Pensador_Texto_1:
	.string "MING's MADAAMU is extremely strong,\n"
	.string "having undergone exceptional training,\l"
	.string "which is reflected in battle.$"

Route49_Pagoda_P8_Tercer_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Tercer_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Tercer_Pensador_Texto_1:
	.string "LUNG, the strongest sage in the pagoda\n"
	.string "after our GRAND MASTER, even became\l"
	.string "the JOHTO CHAMPION some time ago. He\l"
	.string "was fascinated by the SACRED DRAGON,\l"
	.string "and since then, he dedicated himself to\l"
	.string "training a DUNSPARCE he saved.$"

Route49_Pagoda_P8_Cuarto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Cuarto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Cuarto_Pensador_Texto_1:
	.string "The ELITE FOUR members guard\n"
	.string "the upper floors of the pagoda. On\l"
	.string "these floors, not only does our GRAND\l"
	.string "MASTER train, but there are also\l"
	.string "valuable writings about ancestral\l"
	.string "POKÉMON.$"

Route49_Pagoda_P8_Quinto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Quinto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Quinto_Pensador_Texto_1:
	.string "The color of life must be absorbed, but\n"
	.string "never dwell on the details. Details are\l"
	.string "always banal.$"

Route49_Pagoda_P8_Sexto_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Sexto_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Sexto_Pensador_Texto_1:
	.string "Some of our most skilled sages have\n"
	.string "managed to fully master the ancient\l"
	.string "POKÉMON of JOHTO. If you wish to\l"
	.string "continue ascending, you must face\l"
	.string "them.$"

Route49_Pagoda_P8_Septimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Septimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Septimo_Pensador_Texto_1:
	.string "Our ELITE FOUR was founded with the\n"
	.string "very creation of the DUN TOWER, to\l"
	.string "remind us all that excellence is there,\l"
	.string "ready to test anyone who wants to\l"
	.string "aspire to it.$"

Route49_Pagoda_P8_Octavo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Octavo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Octavo_Pensador_Texto_1:
	.string "That SAMURAI POKÉMON of MAO inspires a\n"
	.string "strong sense of reverence. Although I'm\l"
	.string "not entirely sure it's of the BUG TYPE,\l"
	.string "even though it appears to be.$"

Route49_Pagoda_P8_Noveno_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Noveno_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Noveno_Pensador_Texto_1:
	.string "The present cannot be reduced to a\n"
	.string "means to achieve a future end; the\l"
	.string "present is the end in itself.$"

Route49_Pagoda_P8_Decimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Decimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Decimo_Pensador_Texto_1:
	.string "HO-OH and LUGIA came after the SACRED\n"
	.string "DRAGON. It is even more enigmatic than\l"
	.string "the two legendary birds.$"


Route49_Pagoda_P8_Undecimo_Pensador::
lock
faceplayer
msgbox Route49_Pagoda_P8_Undecimo_Pensador_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Undecimo_Pensador_Texto_1:
	.string "Enduring hunger without succumbing to\n"
	.string "fear or pain is preferable than living in\l"
	.string "abundance but burdened with anxiety.$"

Route49_Pagoda_P8_Curacion::
lock
faceplayer
msgbox Route49_Pagoda_P8_Curacion_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Route49_Pagoda_P8_Curacion_Texto_2 MSGBOX_AUTOCLOSE
release
end

Route49_Pagoda_P8_Curacion_Texto_1:
	.string "It might be wise to take a break; DUN\n"
	.string "TOWER is quite lengthy and challenging.$"

Route49_Pagoda_P8_Curacion_Texto_2:
	.string "Your POKÉMON are ready to continue\n"
	.string "your journey.$"
