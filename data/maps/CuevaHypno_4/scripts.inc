CuevaHypno_4_MapScripts::
	.byte 0


CuevaHypno_4_Lider::
lock
faceplayer
msgbox CuevaHypno_4_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, CuevaHypno_4_Lider_Move_1
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CuevaHypno_4_Lider_Move_2
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, CuevaHypno_4_Lider_Move_3
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CuevaHypno_4_Lider_Move_2
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CuevaHypno_4_Lider_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox CuevaHypno_4_Lider_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, CuevaHypno_4_Lider_Move_1
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, CuevaHypno_4_Lider_Move_4
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_TRICK_HOUSE_END_MAN
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_DEWFORD_TOWN_STATE, 2
release
end

CuevaHypno_4_Lider_Move_4:
face_player
step_end

CuevaHypno_4_Lider_Move_3:
face_left
step_end

CuevaHypno_4_Lider_Move_2:
emote_exclamation_mark
face_player
step_end

CuevaHypno_4_Lider_Move_1:
face_up
step_end


CuevaHypno_4_Lider_Texto_1:
.string "Oh... ¿Pero cómo?\n"
	.string "Nadie ha descubierto este lugar en 40\l"
	.string "años.$"

CuevaHypno_4_Lider_Texto_2:
.string "Entonces me viste cuando ese HYPNO\n"
	.string "atacó a los niños. Pero no eres de\l"
	.string "aquí, ¿verdad?\l"
	.string "El BOSQUE BAYA es ya un lugar\l"
	.string "olvidado para los habitantes de la\l"
	.string "isla, no siempre fue así...$"

CuevaHypno_4_Lider_Texto_3:
.string "¡Ah! ¡KANTO!\n"
	.string "Puede que no me creas, pero hace\l"
	.string "mucho, fui LÍDER de GIMNASIO allí,\l"
	.string "cuando PUEBLO LAVANDA contaba con\l"
	.string "uno.$"


CuevaHypno_4_Lider_Texto_4:
	.string "AGATHA y yo fuimos los mejores\n"
	.string "alumnos de la única CAMPEONA de la\l"
	.string "región que llegó a serlo empleando\l"
	.string "POKÉMON FANTASMA y PSÍQUICO.\l"
	.string "Eso... al menos hasta antes de venir\l"
	.string "aquí, desde entonces, llevo décadas\l"
	.string "sin saber nada de KANTO.$"

CuevaHypno_4_Lider_Texto_5:
.string "¿AGATHA forma parte del ALTO MANDO?\n"
	.string "Vaya... se mantiene bien, entonces no\l"
	.string "soy el único que aún se resiste a que\l"
	.string "el paso del tiempo acabe por\l"
	.string "degradarlo. Me alegra saber eso.$"

CuevaHypno_4_Lider_Texto_6:
.string "... ...$"

CuevaHypno_4_Lider_Texto_7:
.string "Ahora que te observo en detalle, a\n"
	.string "pesar de tu juventud, auguro una gran\l"
	.string "longevidad para ti también.\l"
	.string "Pareces haber vivido ya mucho, pero\l"
	.string "tu aventura no ha hecho más que\l"
	.string "empezar, y estás ansioso por ver todo\l"
	.string "cuanto este mundo tiene por\l"
	.string "ofrecer.\l"
	.string "¿No es así?$"

CuevaHypno_4_Lider_Texto_8:
.string "Tal vez yo pueda contribuir a ello.\n"
	.string "Las circunstancias me han obligado a\l"
	.string "recluirme en esta cueva, pero\l"
	.string "entrenar es algo que haría aunque\l"
	.string "estuviera solo en una isla desierta,\l"
	.string "hasta el fin de mis días.$"


CuevaHypno_4_Lider_Texto_9:
.string "Este no es lugar para combatir, si lo\n"
	.string "que quieres es un combate, pásate\l"
	.string "por el GIMNASIO que hay al norte\l"
	.string "de la cueva.\l"
	.string "De entrar, serás el primer aspirante\l"
	.string "en casi 4 décadas...$"

CuevaHypno_4_Cartel::
lock
msgbox CuevaHypno_4_Cartel_Texto_1 MSGBOX_SIGN
release
end

CuevaHypno_4_Cartel_Texto_1:
.string "CUEVA DE HYPNO$"


