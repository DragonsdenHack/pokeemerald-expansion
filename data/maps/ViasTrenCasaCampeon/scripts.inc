ViasTrenCasaCampeon_MapScripts::
	.byte 0


ViasTrenCasaCampeon_Agatha::
lock
faceplayer
compare VAR_SECRET_BASE_HIGH_TV_FLAGS, 4
goto_if_gt ViasTrenCasaCampeon_Agatha_2
msgbox ViasTrenCasaCampeon_Agatha_Texto_1 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Agatha_Texto_2 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Agatha_Texto_3 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Agatha_Texto_4 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Agatha_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 4
release
end

ViasTrenCasaCampeon_Agatha_2::
msgbox ViasTrenCasaCampeon_Agatha_Texto_5 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_3::
msgbox ViasTrenCasaCampeon_Agatha_Texto_6 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_4::
msgbox ViasTrenCasaCampeon_Agatha_Texto_7 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_5::
msgbox ViasTrenCasaCampeon_Agatha_Texto_8 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Agatha_Texto_1:
.string "AGATHA: Oh… {PLAYER}, qué sorpresa\n"
	.string "verte aquí. No hay lugar en el mundo\l"
	.string "que se te escape, ¿eh?$"

ViasTrenCasaCampeon_Agatha_Texto_2:
.string "Me he retirado a este lugar, cuando algo\n"
	.string "acaba, acaba. ¿Sabes? No iba a forzar\l"
	.string "más la situación en LAVANDA. ¿Con qué\l"
	.string "cara íbamos a pasear mi GENGAR y yo por\l"
	.string "sus calles sin la TORRE POKÉMON que nos\l"
	.string "vio crecer? Sin poder entrar en ella y\l"
	.string "sentir su energía… no tendría ningún\l"
	.string "sentido seguir allí.$"

ViasTrenCasaCampeon_Agatha_Texto_3:
.string "Pensé en retirarme a TORRE CAMPANA de\n"
	.string "nuevo, pero necesito volver a mis\l"
	.string "raices. Aquí aprendí mucho con la que\l"
	.string "fue mi maestra, la única que llegó a ser\l"
	.string "CAMPEONA usando POKÉMON TIPO\l"
	.string "FANTASMA.$"

ViasTrenCasaCampeon_Agatha_Texto_4:
.string "Aún vive, aunque ahora descansa en el\n"
	.string "MT.PLATEADO, puede que incluso la\l"
	.string "hayas visto.$"

ViasTrenCasaCampeon_Agatha_Texto_5:
.string "Si vuelves por ahí, ¿me harías el favor\n"
	.string "de avisarla? Después de todo lo que ha\l"
	.string "ocurrido, una buena charla con ella me\l"
	.string "haría muy feliz.$"

ViasTrenCasaCampeon_Agatha_Texto_6:
.string "AGATHA: Si vuelves por ahí, ¿me harías\n"
	.string "el favor de avisarla? Después de todo\l"
	.string "lo que ha ocurrido, una buena charla\l"
	.string "con ella me haría muy feliz.$"

ViasTrenCasaCampeon_Agatha_Texto_7:
.string "AGATHA: Mi maestra llevaba décadas sin\n"
	.string "sentir entusiasmo por combatir. Si le\l"
	.string "haces el honor, también me lo harás a\l"
	.string "mi, siento mucha curiosidad por ver ese\l"
	.string "combate.$"

ViasTrenCasaCampeon_Agatha_Texto_8:
.string "AGATHA: Cuando te vi en la LIGA POKÉMON\n"
	.string "sabía que tenías potencial, pero…\l"
	.string "mírate, has derrotado a la mejor\l"
	.string "entrenadora que he conocido. El mundo\l"
	.string "es tuyo para seguir superando límites.$"


ViasTrenCasaCampeon_Dialogo_Agatha_Campeona::
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_1 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_2 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_3 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_4 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_5 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_6 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_8 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_1:
.string "Y tú lo sabes. En el pasado nada se\n"
	.string "pierde, nada podrá arrebatarte todo lo\l"
	.string "que has vivido allí, ha quedado\l"
	.string "almacenado para siempre, ya forma\l"
	.string "parte del devenir de KANTO.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_2:
.string "AGATHA: …$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_3:
.string "Ah… Eras {PLAYER}, ¿no? Si te soy\n"
	.string "sincero, no esperaba volver a verte, ¿a\l"
	.string "quién puede interesarle lo que tengan\l"
	.string "que decir dos viejas glorias como\l"
	.string "nosotras? ¿Verdad?$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_4:
.string "AGATHA: {PLAYER} es un encanto, si lo\n"
	.string "vieras combatir. Transmite ese aura de\l"
	.string "antiguos campeones, como tú. Ha nacido\l"
	.string "en una época que no le corresponde.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_5:
.string "Tal vez por eso precisamente deba\n"
	.string "haber nacido en esta época, si es como\l"
	.string "dices, {PLAYER} puede evitar que los\l"
	.string "viejos valores sean enterrados.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_6:
.string "AGATHA: Eres muy joven, {PLAYER},\n"
	.string "pero ya has vivido más que muchos de\l"
	.string "nuestra edad que ven su vida pasar.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_7:
.string "Sé que antes te hablé de la\n"
	.string "imposibilidad de que nuestros equipos\l"
	.string "se cruzaran, pero… aún vivo…\l"
	.string "físicamente no es imposible que tal\l"
	.string "encuentro se diera. En el MT.PLATEADO\l"
	.string "pequé de no considerar todas las\l"
	.string "posibilidades, para mi y mi equipo.$"

ViasTrenCasaCampeon_Dialogo_Agatha_Campeona_Texto_8:
.string "Con ello quiero decir que, si estás\n"
	.string "dispuesto, mediré mi equipo con el tuyo.\l"
	.string "Háblame cuando estés listo.$"

ViasTrenCasaCampeon_Combate_Campeona::
lock
faceplayer
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViasTrenCasaCampeon_Combate_Campeona_No
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_3 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_4 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_5 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_6 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_7 MSGBOX_AUTOCLOSE
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_8 MSGBOX_AUTOCLOSE
release
end

ViasTrenCasaCampeon_Combate_Campeona_No::
msgbox ViasTrenCasaCampeon_Combate_Campeona_Texto_2 MSGBOX_AUTOCLOSE
release
end


ViasTrenCasaCampeon_Combate_Campeona_Texto_1:
.string "¿Estás listo?$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_2:
.string "Tengo todo el tiempo del mundo, ahora\n"
	.string "que he vuelto aquí, no me iré de este\l"
	.string "lugar.$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_3:
.string "Déjame sentir la energía de tus\n"
	.string "POKÉMON. ¡Veamos de qué están hechos!$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_4:
.string "No todo lo nuevo es decadente…$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_5:
.string "AGATHA no exageraba contigo. Tienes el\n"
	.string "corazón de un CAMPEÓN, y las\l"
	.string "herramientas necesarias.$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_6:
.string "Poco tengo que enseñarte, lo que sí me\n"
	.string "gustaría es que tuvieras esto.$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_7:
.string "¡OBTUVISTE UN CALYREX AL NV.70!$"

ViasTrenCasaCampeon_Combate_Campeona_Texto_8:
.string "Uno de mis últimos pasatiempos ha sido\n"
	.string "cultivar y ver crecer a estos pequeños,\l"
	.string "no te imaginas el poder contenido en\l"
	.string "CALYREX, espero que saques buen\l"
	.string "provecho de ello.$"
