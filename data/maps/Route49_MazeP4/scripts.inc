Route49_MazeP4_MapScripts::
	.byte 0


Route49_MazeP4_3::
lock     
faceplayer     
msgbox Route49_MazeP4_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text3:
.string "No se trata de realizar el esfuerzo\n"
.string "máximo, sino el esfuerzo óptimo que nos\l"
.string "permita seguir mejorando un día más.$"




Route49_MazeP4_4::
lock     
faceplayer     
msgbox Route49_MazeP4_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text4:
.string "La gente tiene tanta necesidad de\n"
.string "mencionar los defectos porque duele\l"
.string "mucho que te superen en virtudes.$"



Route49MazeP4Documento_100::
lock     
showmonpic SPECIES_SACRED_DRAGON, 10, 3  
playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP4Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP4Documento_Text_100:
.string "DRAGÓN SAGRADO:\p"
	.string "PS: 163\n"
	.string "ATAQUE: 2\l"
	.string "DEFENSA: 97\l"
	.string "ATAQUE ESPECIAL: 157\l"
	.string "DEFENSA ESPECIAL: 193\l"
	.string "VELOCIDAD: 109\l"
	.string "TOTAL: 721\p"
	.string "DRAGÓN/PSÍQUICO\n"
	.string "La leyenda dice que surgió a partir de\n"
	.string "un DUNSPARCE, el cual fue despreciado\l"
	.string "y juzgado por el resto de POKEMON.\l"
	.string "Producto de ello y su inquebrantable\l"
	.string "voluntad, logró trascender más allá de\l"
	.string "su limitada forma. El proceso y\l"
	.string "fenómeno por el cual logró esto es todo\l"
	.string "un misterio.$"

Route49_MazeP4_Combate_Maestro:
msgbox Route49_MazeP4_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_12 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_13 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_14 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_15 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_16 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_17 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_18 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_19 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_20 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_21 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_22_1 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_22 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_23 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_24 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_25 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_26 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_27 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_28 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_29 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_30 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_31 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_32 MSGBOX_AUTOCLOSE
release
end

Route49_MazeP4_Combate_Maestro_Texto_1:
.string "G.MAESTRO: Tienes talento, voluntad y\n"
	.string "espíritu, joven. Pero te falta\l"
	.string "templanza, sin ella, jamás lograrás\l"
	.string "sacar todo tu potencial.$"

Route49_MazeP4_Combate_Maestro_Texto_2:
.string "Tu ética de entrenamiento es\n"
	.string "asombrosa. Eres consciente de tus\l"
	.string "límites, y actúas para superarlos una\l"
	.string "vez tras otra, pero sin esa templanza\l"
	.string "dentro de un combate real, no podrás\l"
	.string "encontrar el nivel que mereces acorde\l"
	.string "a cómo entrenas.$"

Route49_MazeP4_Combate_Maestro_Texto_3:
.string "ANDRA: Estuve tan cerca…$"

Route49_MazeP4_Combate_Maestro_Texto_4:
.string "G.MAESTRO: El combate nunca peligró\n"
	.string "para mi equipo, creías tener el control,\l"
	.string "únicamente por hacer uso de un poder\l"
	.string "precisamente incontrolable.$"

Route49_MazeP4_Combate_Maestro_Texto_5:
.string "ANDRA: Ya veo, la próxima vez\n"
	.string "encontraré ese término medio, tan\l"
	.string "difícil de hallar.$"

Route49_MazeP4_Combate_Maestro_Texto_6:
.string "G.MAESTRO: Mmm, {PLAYER}, ¿no?\n"
	.string "Acércate, por favor.$"

Route49_MazeP4_Combate_Maestro_Texto_7:
.string "Desprendes un aura muy parecida a la de\n"
	.string "ANDRA, aunque más calmada, menos\l"
	.string "frenética.$"

Route49_MazeP4_Combate_Maestro_Texto_8:
.string "Mmm, bien… enséñame cómo te relacionas\n"
	.string "con los tuyos.$"

Route49_MazeP4_Combate_Maestro_Texto_9:
.string "¡Oh! Qué maestría…$"

Route49_MazeP4_Combate_Maestro_Texto_10:
.string "G.MAESTRO: Ahora comprendo porqué el\n"
	.string "DRAGÓN SAGRADO apareció dos veces,\l"
	.string "ambos cultiváis un vínculo similar con\l"
	.string "uno de vuestros POKÉMON. El DRAGÓN\l"
	.string "SAGRADO lo interpretó como un único\l"
	.string "cuerpo.$"

Route49_MazeP4_Combate_Maestro_Texto_11:
.string "ANDRA: ¿Se refiere a nuestros CROBAT?\n"
	.string "Los dos obtuvimos uno el mismo día, han\l"
	.string "crecido mucho.$"

Route49_MazeP4_Combate_Maestro_Texto_12:
.string "G.MAESTRO: ¡Oh, sí! Desde luego, la\n"
	.string "cuestión es que vuestro estilo como\l"
	.string "entrenadores ha afectado al\l"
	.string "crecimiento final de vuestros CROBAT.$"

Route49_MazeP4_Combate_Maestro_Texto_13:
.string "¿Lo entendéis? Habéis moldeado la\n"
	.string "realidad de vuestro POKÉMON, a través\l"
	.string "de vuestra voluntad y vuestra\l"
	.string "conciencia. Solo contados\l"
	.string "entrenadores podrían hacer eso.$"

Route49_MazeP4_Combate_Maestro_Texto_14:
.string "Vuestro caso es un ejemplo de las\n"
	.string "posibilidades infinitas que existen\l"
	.string "para cada POKÉMON, tal y como…$"

Route49_MazeP4_Combate_Maestro_Texto_15:
.string "ANDRA: ¿Sus FUERTE VÍNCULO de\n"
	.string "JOLTEON, FLAREON y VAPOREON?$"

Route49_MazeP4_Combate_Maestro_Texto_16:
.string "Por eso EUSINE está tan interesado en\n"
	.string "los PERROS LEGENDARIOS, ¿verdad?$"

Route49_MazeP4_Combate_Maestro_Texto_17:
.string "G.MAESTRO: Aquí no usamos ese término,\n"
	.string "joven.$"

Route49_MazeP4_Combate_Maestro_Texto_18:
.string "En, Rai y Sui fueron los primeros\n"
	.string "POKÉMON en experimentar un vínculo\l"
	.string "similar a vuestros CROBAT. Hace más de\l"
	.string "1000 años, el primer GRAN MAESTRO de\l"
	.string "esta torre, logró obtener ese vínculo\l"
	.string "con 3 POKÉMON a la vez. 3 POKÉMON que\l"
	.string "eran formas primitivas de FLAREON,\l"
	.string "JOLTEON y VAPOREON.$"

Route49_MazeP4_Combate_Maestro_Texto_19:
.string "La diferencia con ENTEI, RAIKOU y\n"
	.string "SUICUNE, es que estos últimos\l"
	.string "surgieron por intervención divina.$"

Route49_MazeP4_Combate_Maestro_Texto_20:
.string "EUSINE: Y aún así, tienen un poder\n"
	.string "menor que los surgidos producto de la\l"
	.string "interacción humano-POKÉMON.$"

Route49_MazeP4_Combate_Maestro_Texto_21:
.string "G.MAESTRO: Una interacción muy\n"
	.string "poderosa, decidme, ¿qué clase de\l"
	.string "fuerzas habéis enfrentado en vuestro\l"
	.string "viaje por JOHTO?$"

Route49_MazeP4_Combate_Maestro_Texto_22_1:
.string "ANDRA: A las mayores que puedan\n"
	.string "existir.$"

Route49_MazeP4_Combate_Maestro_Texto_22:
.string "Yo llegué a enfrentar al HO-OH dorado,\n"
	.string "en las profundidades de RUINAS ALFA.$"

Route49_MazeP4_Combate_Maestro_Texto_23:
.string "{PLAYER}... a algo aún más grande.$"

Route49_MazeP4_Combate_Maestro_Texto_24:
.string "G.MAESTRO: Tal y como temía, enfrentar\n"
	.string "a algo de tal calibre ha llegado a\l"
	.string "expandir las leyes de nuestro mundo.$"

Route49_MazeP4_Combate_Maestro_Texto_25:
.string "Tal vez sea una anomalía. Tal vez una\n"
	.string "bendición. Ese ser pudo hacer algo así,\l"
	.string "en señal de gratitud por derrotarlo,\l"
	.string "aunque fuera anclado a nuestras\l"
	.string "normas. Dicho POKÉMON pudo conceder\l"
	.string "parte de su ilimitada capacidad a\l"
	.string "mortales como nosotros.$"

Route49_MazeP4_Combate_Maestro_Texto_26:
.string "EUSINE: Entonces, ahora el nuevo límite\n"
	.string "es un misterio, ¿no?$"

Route49_MazeP4_Combate_Maestro_Texto_27:
.string "G.MAESTRO: ¡Jo, jo, jo! Y así debe ser,\n"
	.string "¿no crees, EUSINE?$"

Route49_MazeP4_Combate_Maestro_Texto_28:
.string "EUSINE: Su-supongo.$"

Route49_MazeP4_Combate_Maestro_Texto_29:
.string "G.MAESTRO: Ambos sois muy jovenes, aún\n"
	.string "inconscientes acerca de todo lo que\l"
	.string "podéis dar, vuestro potencial y\l"
	.string "posibilidades son infinitas.$"

Route49_MazeP4_Combate_Maestro_Texto_30:
.string "EUSINE: Yo me marcho. {PLAYER}, me\n"
	.string "gustaría que volvieras a visitar mi\l"
	.string "pequeña casa, al norte de ORQUÍDEA,\l"
	.string "tengo algo que proponerte.$"

Route49_MazeP4_Combate_Maestro_Texto_31:
.string "ANDRA: Yo también me voy, ha sido un\n"
	.string "placer luchar con usted, maestro.$"

Route49_MazeP4_Combate_Maestro_Texto_32:
.string "En cuanto acabemos nuestras misiones,\n"
	.string "deberíamos ver inmediatamente a\l"
	.string "GIOVANNI, toda esta información es\l"
	.string "justo lo que andábamos buscando.\l"
	.string "Buena suerte para lo que te reste,\l"
	.string "{PLAYER}.$"
