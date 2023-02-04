Route15_MapScripts::
	.byte 0

Route15_1::
end

Route15_2::
end

Route15_3::
end

Route15_4::
end


Route15_5::
end

Route15_6::
end

Route15_7::
end

Route15_8::
end

Route15_9::
end

Route15_10::
end

Route15_11::
end

Route15_12::
end

Route15_13::
end



Route15_EventScript_Motorista::
	trainerbattle_single TRAINER_DALTON_3, Route15_Text_MotoristaIntro, Route15_Text_MotoristaDefeated
	msgbox Route15_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_4, Route15_Text_Motorista2Intro, Route15_Text_Motorista2Defeated
	msgbox Route15_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella::
	trainerbattle_single TRAINER_TED, Route15_Text_BellaIntro, Route15_Text_BellaDefeated
	msgbox Route15_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella2::
	trainerbattle_single TRAINER_PAUL, Route15_Text_Bella2Intro, Route15_Text_Bella2Defeated
	msgbox Route15_Bella2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica::
	trainerbattle_single TRAINER_DIANA_5, Route15_Text_ChicaIntro, Route15_Text_ChicaDefeated
	msgbox Route15_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_1, Route15_Text_OrnitologoIntro, Route15_Text_OrnitologoDefeated
	msgbox Route15_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_ISABEL_5, Route15_Text_Ornitologo2Intro, Route15_Text_Ornitologo2Defeated
	msgbox Route15_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica2::
	trainerbattle_single TRAINER_DIANA_4, Route15_Text_Chica2Intro, Route15_Text_Chica2Defeated
	msgbox Route15_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica3::
	trainerbattle_single TRAINER_AMY_AND_LIV_2, Route15_Text_Chica3Intro, Route15_Text_Chica3Defeated
	msgbox Route15_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica4::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route15_Text_Chica4Intro, Route15_Text_Chica4Defeated
	msgbox Route15_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



Route15Documento_100::
msgbox Route15Documento_Text_100, MSGBOX_SIGN   
end

Route15Documento_Text_100:
	.string "RUTA 15\n"
	.string "Al oeste CIUDAD FUCSIA$"



Route15_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja1Intro, Route15_Text_Pareja1Defeated
	msgbox Route15_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja2Intro, Route15_Text_Pareja2Defeated
	msgbox Route15_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route15_Koga_Bruno::
msgbox Route15_Koga_Bruno_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_8 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_11 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_12 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_13 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_14 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_15 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_16 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_17 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_18 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_19 MSGBOX_AUTOCLOSE
release
end

Route15_Koga_Bruno_Texto_1:
.string "????: Eres una verguenza para los\n"
	.string "LÍDERES DE GIMNASIO KOGA, y debes\l"
	.string "estarme agradecido de que no\l"
	.string "informe de esto a LANCE, no solo\l"
	.string "te niegas a prestar tu ayuda para\l"
	.string "erradicar a los motoristas más\l"
	.string "radicales que abundan en el CAMINO\l"
	.string "BICIS, sino que reconoces que\l"
	.string "entiendes su causa, ¿no habrás\l"
	.string "tenido tú también contacto con la\l"
	.string "banda criminal ROCKET?\l"
	.string "Sabes que eso implicaría tu\l"
	.string "destitución inmediata como LÍDER\l"
	.string "DE GIMNASIO, ¿no?$"

Route15_Koga_Bruno_Texto_2:
.string "KOGA: Me insultas BRUNO, sabes tan\n"
	.string "bien como yo que mi máxima\l"
	.string "preocupación ha sido siempre el\l"
	.string "bien de esta región, entiendo que\l"
	.string "tu posición como miembro de la\l"
	.string "ÉLITE 4 tenga ciertas exigencias,\l"
	.string "pero no es mi competencia el\l"
	.string "obligar a un puñado de motoristas\l"
	.string "a dejar de ser afines al TEAM\l"
	.string "ROCKET.$"

Route15_Koga_Bruno_Texto_3:
.string "BRUNO: Me parece que no me has\n"
	.string "entendido KOGA, no se trata de si\l"
	.string "quieren o no ser afines,\l"
	.string "cualquiera que muestre cualquier\l"
	.string "signo de colaboración con esos\l"
	.string "delincuentes debe responder ante\l"
	.string "la ley, y casualmente aquí, en\l"
	.string "FUCSIA, es donde está el principal\l"
	.string "foco de insurrectos, al no hacer\l"
	.string "nada al respecto serás tratado\l"
	.string "igualmente como culpable KOGA.$"

Route15_Koga_Bruno_Texto_4:
.string "KOGA: No me hagas esto BRUNO,\n"
	.string "sabes que después de la retirada\l"
	.string "de AGATHA, tú ascenderás un\l"
	.string "escalón dentro de la ÉLITE 4, y la\l"
	.string "vacante libre será mía.$"

Route15_Koga_Bruno_Texto_5:
.string "BRUNO: Eso es lo que me preocupa,\n"
	.string "alguien que muestra tal\l"
	.string "incapacidad para mantener el orden\l"
	.string "y la disciplina en FUCSIA no\l"
	.string "debería formar parte de la ÉLITE\l"
	.string "de KANTO, o peor aún, te conviene\l"
	.string "mantener a esos motoristas ahí\l"
	.string "porque en el fondo los apoyas, ¿o\l"
	.string "no?$"

Route15_Koga_Bruno_Texto_6:
.string "KOGA: No es delito dejar al pueblo\n"
	.string "expresar sus ideas BRUNO.$"

Route15_Koga_Bruno_Texto_7:
.string "BRUNO: Por el momento...\n"
	.string "Por suerte para ti, vas a poder\l"
	.string "lavarte las manos con todo este\l"
	.string "asunto, un ALTO MANDO como yo no\l"
	.string "viaja a un lugar como este a no\l"
	.string "ser que tenga un motivo de peso...$"

Route15_Koga_Bruno_Texto_8:
.string "BRUNO: ...y tengo órdenes directas\n"
	.string "de LANCE de entrar al CAMINO BICIS\l"
	.string "y hacer limpieza de todos aquellos\l"
	.string "que vayan en contra de nuestro\l"
	.string "gobierno, serán detenidos y\l"
	.string "llevados a prisión inmediatamente.$"

Route15_Koga_Bruno_Texto_9:
.string "KOGA: ...$"

Route15_Koga_Bruno_Texto_10:
.string "BRUNO: No te preocupes por el\n"
	.string "CAMINO BICIS, seguirá contando con\l"
	.string "motoristas...leales a nosotros,\l"
	.string "siquiera tendrás que dar\l"
	.string "explicaciones a nadie.$"

Route15_Koga_Bruno_Texto_11:
.string "BRUNO: No tengo nada más que\n"
	.string "decirte KOGA, ya que no quieres\l"
	.string "colaborar, al menos mantente al\l"
	.string "margen y no estorbes, que tengas\l"
	.string "un buen día.$"

Route15_Koga_Bruno_Texto_12:
.string "KOGA: Ese BRUNO...cómo se le han\n"
	.string "subido los humos desde que forma\l"
	.string "parte de la ÉLITE 4, no es ni la\l"
	.string "sombra de aquel que llevaba el\l"
	.string "DOJO en AZAFRÁN...$"

Route15_Koga_Bruno_Texto_13:
.string "{PLAYER}, ¿me equivoco?\n"
	.string "Fuiste tú quien capturó al\l"
	.string "KANGASKHAN perdido y salvó el\l"
	.string "negocio de la ZONA SAFARI,\l"
	.string "GIOVANNI no se equivocaba cuando\l"
	.string "me dijo que confiara en ti, aquí\l"
	.string "tienes un pequeño obsequio por mi\l"
	.string "parte.$"

Route15_Koga_Bruno_Texto_14:
.string "Con estas gafas equipadas en\n"
	.string "cualquier POKÉMON, la potencia de\l"
	.string "sus movimientos SINIESTRO se verá\l"
	.string "incrementada en un 20%, si tienes\l"
	.string "POKÉMON como HOUNDOOM o MURKROW\l"
	.string "pegarán muy duro con PULSO O TAJO\l"
	.string "UMBRÍO.$"

Route15_Koga_Bruno_Texto_15:
.string "No mentía a BRUNO cuando decía que\n"
	.string "mi única preocupación ha sido\l"
	.string "siempre el bien de esta región, el\l"
	.string "problema es que mi idea de bien\l"
	.string "dista mucho de la suya, y una\l"
	.string "dictadura impuesta por la fuerza y\l"
	.string "además venida de alguien de fuera\l"
	.string "como LANCE nunca contará con mi\l"
	.string "apoyo...$"

Route15_Koga_Bruno_Texto_16:
.string "BRUNO va directo al CAMINO BICIS,\n"
	.string "tratará de convencer a la mayor\l"
	.string "parte de motoristas de que cambien\l"
	.string "de bando, sino lo logra usará la\l"
	.string "fuerza para llevar a todos a\l"
	.string "prisión, si eso ocurre están\l"
	.string "perdidos, sus POKÉMON están a años\l"
	.string "luz tanto en fuerza como en\l"
	.string "nivel...$"

Route15_Koga_Bruno_Texto_17:
.string "Yo no puedo oponerme por obvias\n"
	.string "razones, pero tú, ¡tú {PLAYER}\l"
	.string "podrías hacerle frente!\l"
	.string "GIOVANNI dijo que eras uno de los\l"
	.string "entrenadores con mayor proyección\l"
	.string "y futuro, BRUNO forma parte de la\l"
	.string "ÉLITE, sí, pero dudo que vaya con\l"
	.string "sus mejores POKÉMON, si alguien\l"
	.string "puede detenerlo eres tú...$"

Route15_Koga_Bruno_Texto_18:
.string "Estaré en mi GIMNASIO {PLAYER}, por\n"
	.string "desgracia no puedo dejarte entrar\l"
	.string "por ley, al menos por el momento,\l"
	.string "pero estaré informado de todo\l"
	.string "cuanto ocurra en el CAMINO BICIS,\l"
	.string "no te queda duda.$"

Route15_Koga_Bruno_Texto_19:
.string "KOGA: Confío en ti, {PLAYER}.$"

Route15_Koga_Bruno_Move_1:
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_2:
face_left
step_end

Route15_Koga_Bruno_Move_3:
walk_in_place_up
step_end

Route15_Koga_Bruno_Move_4:
walk_in_place_down
step_end

Route15_Koga_Bruno_Move_5:
emote_exclamation_mark
step_end

Route15_Koga_Bruno_Move_6:
walk_left
walk_left
walk_left
step_end

Route15_Koga_Bruno_Move_7:
emote_exclamation_mark
face_right
step_end

Route15_Koga_Bruno_Move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route15_Koga_Bruno_Move_9:
face_right
step_end

Route15_Koga_Bruno_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end
