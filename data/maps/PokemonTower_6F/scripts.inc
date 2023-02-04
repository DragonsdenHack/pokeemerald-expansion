PokemonTower_6F_MapScripts::
	.byte 0

PokemonTower6F_1::
end



PokemonTower6F_2::
end



PokemonTower6F_3::
end



PokemonTower6F_4::
end



PokemonTower6F_5::
end



PokemonTower6F_EventScript_Channeler::
	trainerbattle_single TRAINER_SHARON, PokemonTower6F_Text_ChannelerIntro, PokemonTower6F_Text_ChannelerDefeated
	msgbox PokemonTower6F_Text_ChannelerPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler2::
	trainerbattle_single TRAINER_BRENDA, PokemonTower6F_Text_Channeler2Intro, PokemonTower6F_Text_Channeler2Defeated
	msgbox PokemonTower6F_Text_Channeler2PostBattle, MSGBOX_AUTOCLOSE
	end



PokemonTower6F_EventScript_Channeler3::
	trainerbattle_single TRAINER_NIKKI, PokemonTower6F_Text_Channeler3Intro, PokemonTower6F_Text_Channeler3Defeated
	msgbox PokemonTower6F_Text_Channeler3PostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_Combate_Fuji::
msgbox PokemonTower_6F_Combate_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_4 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_6 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_7 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_9 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_10 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Combate_Fuji_Texto_12 MSGBOX_AUTOCLOSE
release
end

PokemonTower_6F_Combate_Fuji_Texto_1:
.string "RECLUTAS: ¡Vaya con el viejete, no\n"
	.string "hemos podido abatirte siquiera los\l"
	.string "3 al mismo tiempo!$"

PokemonTower_6F_Combate_Fuji_Texto_2:
.string "FUJI: Inconscientes, le habéis\n"
	.string "privado a este CUBONE de su figura\l"
	.string "materna, y todo por dinero, el\l"
	.string "daño ya es irreparable, abandonad\l"
	.string "este lugar antes de que sea tarde.$"

PokemonTower_6F_Combate_Fuji_Texto_3:
.string "RECLUTAS: ¡Vamos ese MAROWAK se\n"
	.string "interpuso en nuestro camino!\l"
	.string "¡Nos forzó a acabar con su vida,\l"
	.string "nada más!$"

PokemonTower_6F_Combate_Fuji_Texto_4:
.string "UJI: Ya veo, el resultado es lo\n"
	.string "único que cuenta, ¿no?\l"
	.string "Bien, entonces os diré lo que\l"
	.string "vamos a hacer, mi HAUNTER lanzará\l"
	.string "su PESADILLA sobre vosotros, al\l"
	.string "tiempo que os quedáis sin todos\l"
	.string "los cráneos ya robados, tal vez la\l"
	.string "única forma de que recapacitéis\l"
	.string "sea arrebatándoos todo cuanto\l"
	.string "valoráis.$"

PokemonTower_6F_Combate_Fuji_Texto_5:
.string "RECLUTAS: E--Espere anciano, no\n"
	.string "hay necesidad de...$"

PokemonTower_6F_Combate_Fuji_Texto_6:
.string "RECLUTAS: ¡¡ALTO RANGO {PLAYER}!!\n"
	.string "¡Qué oportuno!$"

PokemonTower_6F_Combate_Fuji_Texto_7:
.string "FUJI: Un joven como tú no debería\n"
	.string "desperdiciar su vida sirviendo a\l"
	.string "estos propósitos, ¿{PLAYER}?\l"
	.string "Vamos recapacita...$"

PokemonTower_6F_Combate_Fuji_Texto_8:
.string "FUJI: Ya veo, no me queda otra que\n"
	.string "desarmarte igual que hice con tus\l"
	.string "socios...por la paz de este lugar.$"

PokemonTower_6F_Combate_Fuji_Texto_9:
.string "Te he fallado CUBONE, perdóname...$"

PokemonTower_6F_Combate_Fuji_Texto_10:
.string "({PLAYER} le entregó a FUJI el\n"
	.string "CUBONE).$"

PokemonTower_6F_Combate_Fuji_Texto_11:
.string "PROTÓN: Sabías que este día iba a\n"
	.string "llegar FUJI, no puedes huir\l"
	.string "eternamente de tu pasado.$"

PokemonTower_6F_Combate_Fuji_Texto_12:
.string "PROTÓN: Buen trabajo {PLAYER}, todo\n"
	.string "va según lo planeado, FUJI y yo\l"
	.string "vamos al último piso, donde\l"
	.string "podamos charlar tranquilamente,\l"
	.string "confío en ti para que ni la más\l"
	.string "mínima mota de polvo se cuele en\l"
	.string "esa reunión.$"

PokemonTower_6F_Combate_Fuji_Move_1:
walk_in_place_left
step_end

PokemonTower_6F_Combate_Fuji_Move_2:
walk_in_place_right
step_end

PokemonTower_6F_Combate_Fuji_Move_3:
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_4:
emote_exclamation_mark
step_end

PokemonTower_6F_Combate_Fuji_Move_5:
walk_left
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_6:
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_7:
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_8:
walk_in_place_up
step_end

PokemonTower_6F_Combate_Fuji_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
step_end

PokemonTower_6F_Combate_Fuji_Move_10:
walk_right
walk_right
walk_right
walk_up
walk_in_place_down
step_end

PokemonTower_6F_Combate_Fuji_Move_11:
walk_left
walk_in_place_up
step_end

PokemonTower_6F_Cultistas::
msgbox PokemonTower_6F_Cultistas_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_3 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_4 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_6 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_7 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_9 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_10 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower_6F_Cultistas_Texto_12 MSGBOX_AUTOCLOSE
release
end

PokemonTower_6F_Cultistas_Texto_1:
.string "????: De modo que tú eres el tipo\n"
	.string "que ha estado causando todo este\l"
	.string "alboroto en este lugar sagrado.$"

PokemonTower_6F_Cultistas_Texto_2:
.string "????: Y el tipo que tiene\n"
	.string "secuestrado a FUJI.$"

PokemonTower_6F_Cultistas_Texto_3:
.string "????: Nadie que atente contra la\n"
	.string "espiritualidad de este bendito\l"
	.string "lugar sale de aquí.$"

PokemonTower_6F_Cultistas_Texto_4:
.string "????: De modo que nos desafías,\n"
	.string "acabas de condenar tu alma chico.$"

PokemonTower_6F_Cultistas_Texto_5:
.string "????: Nuestro CULTO no hace\n"
	.string "prisioneros, ¡prepárate para la\l"
	.string "aniquilación de tu espíritu!$"

PokemonTower_6F_Cultistas_Texto_6:
.string "¡Perdóname milord!$"

PokemonTower_6F_Cultistas_Texto_7:
.string "Pobre ROCKET, no reirás tanto\n"
	.string "cuando seas ofrecido en sacrificio\l"
	.string "a nuestro señor.\l"
	.string "¡En guardia!$"

PokemonTower_6F_Cultistas_Texto_8:
.string "¡No!\n"
	.string "¡Seré sacrificado por mi derrota!$"

PokemonTower_6F_Cultistas_Texto_9:
.string "Así que tenemos a un hereje que se\n"
	.string "niega a dejarnos pasar, como\l"
	.string "CULTISTA de mayor rango aquí te\l"
	.string "daré el golpe de gracia.\l"
	.string "¡Siglos de historia se abalanzarán\l"
	.string "sobre ti!$"

PokemonTower_6F_Cultistas_Texto_10:
.string "¡No es posible!$"

PokemonTower_6F_Cultistas_Texto_11:
.string "... ... ...$"

PokemonTower_6F_Cultistas_Texto_12:
.string "CULTISTA: Tu nivel no encaja con\n"
	.string "el paradigma establecido, nos has\l"
	.string "pillado por sorpresa pero te lo\l"
	.string "advierto: no te metas con poderes\l"
	.string "más grandes que tu propia\l"
	.string "existencia si quieres seguir\l"
	.string "viviendo.$"

PokemonTower_6F_Cultistas_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_2:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_3:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_4:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_5:
walk_in_place_left
step_end

PokemonTower_6F_Cultistas_Move_6:
walk_in_place_right
step_end

PokemonTower_6F_Cultistas_Move_7:
face_left
step_end

PokemonTower_6F_Cultistas_Move_8:
walk_right
step_end
