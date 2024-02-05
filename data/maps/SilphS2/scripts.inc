SilphS2_MapScripts::
	.byte 0

SilphS2_EventScript_Policia::
	trainerbattle_single TRAINER_LOLA_5, SilphS2_Text_PoliciaIntro, SilphS2_Text_PoliciaDefeated
	msgbox SilphS2_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico::
	trainerbattle_single TRAINER_LOLA_3, SilphS2_Text_CientificoIntro, SilphS2_Text_CientificoDefeated
	msgbox SilphS2_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico2::
	trainerbattle_single TRAINER_ELI, SilphS2_Text_Cientifico2Intro, SilphS2_Text_Cientifico2Defeated
	msgbox SilphS2_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Policia2::
	trainerbattle_single TRAINER_RICKY_1, SilphS2_Text_Policia2Intro, SilphS2_Text_Policia2Defeated
	msgbox SilphS2_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico3::
	trainerbattle_single TRAINER_LOLA_4, SilphS2_Text_Cientifico3Intro, SilphS2_Text_Cientifico3Defeated
	msgbox SilphS2_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Policia3::
	trainerbattle_single TRAINER_SIMON, SilphS2_Text_Policia3Intro, SilphS2_Text_Policia3Defeated
	msgbox SilphS2_Text_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico4::
	trainerbattle_single TRAINER_ERNEST_5, SilphS2_Text_Cientifico4Intro, SilphS2_Text_Cientifico4Defeated
	msgbox SilphS2_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_3::
lock     
faceplayer     
msgbox SilphS2_Text_3, MSGBOX_DEFAULT
release     
end


SilphS2_Text_3:
	.string "Many folks overlook the nuances of\n"
	.string "probabilities, handling a\l"
	.string "one-in-a-thousand scenario almost\l"
	.string "identically to a one-in-a-million.\l"
	.string "That's the charm of games like the\l"
	.string "lottery, but it doesn't quite cut it for\l"
	.string "a SILPH scientist!$"


SilphS2_4::
lock     
faceplayer     
msgbox SilphS2_Text_4, MSGBOX_DEFAULT
release     
end


SilphS2_Text_4:
	.string "Now that we've put LANCE in his place,\n"
	.string "our relationship with JOHTO may\l"
	.string "improve. We might even establish\l"
	.string "connections with the neighboring\l"
	.string "region.$"



SilphS2_5::
lock     
faceplayer     
msgbox SilphS2_Text_5, MSGBOX_DEFAULT
release     
end


SilphS2_Text_5:
	.string "Sometimes, we must self-obligate to\n"
	.string "push ourselves to the limit to truly see\l"
	.string "what we are capable of. We often\l"
	.string "project this mental image of having\l"
	.string "everything under control and running\l"
	.string "at full capacity as the ideal to\l"
	.string "achieve. However, in practice, most of\l"
	.string "the time, having everything under\l"
	.string "control is synonymous with moving too\l"
	.string "slowly. Many great works or\l"
	.string "achievements have been reached after\l"
	.string "going through moments of uncertainty,\l"
	.string "disorder, and rowing without knowing\l"
	.string "for sure where it will end. These periods\l"
	.string "are also necessary to reach other\l"
	.string "'control' phases.$"




SilphS2_6::
lock     
faceplayer     
msgbox SilphS2_Text_6, MSGBOX_DEFAULT
release     
end


SilphS2_Text_6:
	.string "Back in the day, the king used to take a\n"
	.string "10% cut from the crops of his folks as a\l"
	.string "protection fee. Now, LANCE almost did\l"
	.string "the same, but in reverse. You know what\l"
	.string "that means? Simple, the KANTO folks get\l"
	.string "to keep 10% of what they produce, while\l"
	.string "LANCE and his crew snatch the rest. The\l"
	.string "funny thing is, most people clapped for\l"
	.string "the guy choking them, calling him their\l"
	.string "savior. Just goes to show how twisted\l"
	.string "reality can get.$"



SilphS2_7::
lock     
faceplayer     
msgbox SilphS2_Text_7, MSGBOX_DEFAULT
release     
end


SilphS2_Text_7:
	.string "I hope that from now on, we embark on a\n"
	.string "genuine era of progress and\l"
	.string "development, unlike LANCE's\l"
	.string "aspirations, which came at the cost of\l"
	.string "keeping the people in ignorance. I've\l"
	.string "heard there's a project to connect\l"
	.string "SAFFRON with GOLDENROD in JOHTO. Also,\l"
	.string "they're planning to expand the port of\l"
	.string "VERMILION to include more\l"
	.string "destinations. Time flies, my friend, and\l"
	.string "it waits for no one!$"



SilphS2_8::
lock     
faceplayer     
msgbox SilphS2_Text_8, MSGBOX_DEFAULT
release     
end


SilphS2_Text_8:
	.string "The freedom of capacity gives rise to\n"
	.string "even more constraints than the\l"
	.string "disciplined duty that issues mandates\l"
	.string "and prohibitions. Duty has its bounds.\l"
	.string "On the contrary, capacity has none; it\l"
	.string "remains open-ended. This is why the\l"
	.string "coercion arising from capacity is\l"
	.string "unlimited.$"



SilphS2_9::
lock     
faceplayer     
msgbox SilphS2_Text_9, MSGBOX_DEFAULT
release     
end


SilphS2_Text_9:
	.string "Pretend you're living for the second\n"
	.string "time, and the first time you did it just\l"
	.string "as poorly as you're about to do it now.$"



SilphS2_10::
lock     
faceplayer     
msgbox SilphS2_Text_10, MSGBOX_DEFAULT
release     
end


SilphS2_Text_10:
	.string "We have made outstanding progress on\n"
	.string "the -PORYGON2- prototype in the past\l"
	.string "weeks. Now, its offensive capability\l"
	.string "has increased by 50%, at the expense of\l"
	.string "only a 10% reduction in its defensive\l"
	.string "capacity.$"



SilphS2_11::
lock     
faceplayer     
msgbox SilphS2_Text_11, MSGBOX_DEFAULT
release     
end


SilphS2_Text_11:
	.string "A top-notch plan is worth only as much\n"
	.string "as the units executing it.$"



SilphS2_12::
lock     
faceplayer     
msgbox SilphS2_Text_12, MSGBOX_DEFAULT
release     
end


SilphS2_Text_12:
	.string "When asking for something, pick a busy\n"
	.string "person; they already have the work\l"
	.string "momentum, and your request becomes\l"
	.string "just another task on their to-do list.\l"
	.string "On the contrary, someone with nothing\l"
	.string "to do will need to put in much more\l"
	.string "effort just to get started on your\l"
	.string "request. After all, even the easiest\l"
	.string "task becomes hard with no inertia and a\l"
	.string "lack of motivation..$"



SilphS2_13::
lock     
faceplayer     
msgbox SilphS2_Text_13, MSGBOX_DEFAULT
release     
end


SilphS2_Text_13:
	.string "The GOLDENROD RADIO TOWER has proven\n"
	.string "to be a resounding success in JOHTO; it\l"
	.string "won't be long before a major company\l"
	.string "here adopts the idea.$"



SilphS2_14::
lock     
faceplayer     
msgbox SilphS2_Text_14, MSGBOX_DEFAULT
release     
end


SilphS2_Text_14:
	.string "The human inclination towards rules\n"
	.string "stems from the necessity to simplify\l"
	.string "information for cognitive ease.\l"
	.string "Increased randomness complicates\l"
	.string "summarization, and as information is\l"
	.string "condensed, order prevails, making the\l"
	.string "world seem less random than it is in\l"
	.string "reality.$"



SilphS2_15::
lock     
faceplayer     
msgbox SilphS2_Text_15, MSGBOX_DEFAULT
release     
end


SilphS2_Text_15:
	.string "Some spend an entire lifetime chasing a\n"
	.string "perfect future moment that never\l"
	.string "arrives or, even when it does, they\l"
	.string "ignore it and move on to seek another\l"
	.string "one, reducing their present to a mere\l"
	.string "future end. They fail to realize that\l"
	.string "the journey toward that supposed\l"
	.string "paradise can be more enjoyable than\l"
	.string "being in the paradise itself, which, by\l"
	.string "the way, tends to become dull over time.$"



SilphS2_16::
lock     
faceplayer     
msgbox SilphS2_Text_16, MSGBOX_DEFAULT
release     
end


SilphS2_Text_16:
	.string "Now that SILPH and TEAM ROCKET are\n"
	.string "working together, great things are on\l"
	.string "the horizon for KANTO! The future is\l"
	.string "ours!$"



SilphS2_17::
lock     
faceplayer     
msgbox SilphS2_Text_17, MSGBOX_DEFAULT
release     
end


SilphS2_Text_17:
	.string "Your move at the POKÉMON LEAGUE made a\n"
	.string "huge difference for us. We're free from\l"
	.string "LANCE's control, and now, we can keep\l"
	.string "our secrets in this place. SILPH it's\l"
	.string "like a second home for you and your\l"
	.string "gang, ROCKET.$"



SilphS2_19::
lock     
faceplayer     
msgbox SilphS2_Text_19, MSGBOX_DEFAULT
release     
end


SilphS2_Text_19:
	.string "I prefer to invest my time actually\n"
	.string "doing the task rather than wasting it\l"
	.string "talking and formulating a thousand\l"
	.string "theories on how to do the task.$"



SilphS2_20::
lock     
faceplayer     
msgbox SilphS2_Text_20, MSGBOX_DEFAULT
release     
end


SilphS2_Text_20:
	.string "You reckon I'm plotting some evil\n"
	.string "scheme or creating a kick-ass POKÉMON\l"
	.string "on my computer?... Spot on!$"



SilphS2_21::
lock     
faceplayer     
msgbox SilphS2_Text_21, MSGBOX_DEFAULT
release     
end


SilphS2_Text_21:
	.string "You won't see the way to do something\n"
	.string "until you actually see yourself doing\l"
	.string "it.$"



SilphS2_22::
lock     
faceplayer     
msgbox SilphS2_Text_22, MSGBOX_DEFAULT
release     
end


SilphS2_Text_22:
	.string "Many of us here, myself included, have\n"
	.string "the bad habit of focusing on what\l"
	.string "confirms our knowledge, not on our\l"
	.string "ignorance.$"



SilphS2_23::
lock     
faceplayer     
msgbox SilphS2_Text_23, MSGBOX_DEFAULT
release     
end


SilphS2_Text_23:
	.string "I'm gonna make sure those cops who were\n"
	.string "on LANCE's side and let all that unfair\l"
	.string "stuff happen here end up behind bars.$"



SilphS2_24::
lock     
faceplayer     
msgbox SilphS2_Text_24, MSGBOX_DEFAULT
release     
end


SilphS2_Text_24:
	.string "Honestly, we were sick of the rules set\n"
	.string "by LANCE's government. For every 10\l"
	.string "POKÉS we made, 8 went straight to\l"
	.string "LANCE's government. Who in their right\l"
	.string "mind would accept such a tax squeeze?$"



SilphS2_25::
lock     
faceplayer     
msgbox SilphS2_Text_25, MSGBOX_DEFAULT
release     
end


SilphS2_Text_25:
	.string "There are loads of fascinating POKÉMON\n"
	.string "to uncover out there. It's clear that\l"
	.string "each location's conditions shape a\l"
	.string "species in the end. POKÉMON like\l"
	.string "CAMERUPT and SHARPEDO are exclusive to\l"
	.string "HOENN, while METEOR FALLS gave us\l"
	.string "BAGON, and MT.SILVER brought forth\l"
	.string "LARVITAR. It's all about adapting to\l"
	.string "the environment.$"



SilphS2_26::
lock     
faceplayer     
msgbox SilphS2_Text_26, MSGBOX_DEFAULT
release     
end


SilphS2_Text_26:
	.string "That perpetual and fruitless concern\n"
	.string "about all the things we have to do is, on\l"
	.string "its own, the greatest consumer of time\l"
	.string "and energy.$"



SilphS2_27::
lock     
faceplayer     
msgbox SilphS2_Text_27, MSGBOX_DEFAULT
release     
end


SilphS2_Text_27:
	.string "Honestly, people don't really care\n"
	.string "about your emotions or thoughts; it's\l"
	.string "all about what you can bring to the\l"
	.string "table.$"



SilphS2_29::
lock     
faceplayer     
msgbox SilphS2_Text_29, MSGBOX_DEFAULT
release     
end


SilphS2_Text_29:
	.string "Once the mind embraces a new idea, it\n"
	.string "can never go back to its original size.$"



SilphS2_30::
lock     
faceplayer     
msgbox SilphS2_Text_30, MSGBOX_DEFAULT
release     
end


SilphS2_Text_30:
	.string "Here, we fight for the extraordinary, to\n"
	.string "go where no one else has gone, far\l"
	.string "beyond what those stuck with the\l"
	.string "original 150 could even dream of.$"



SilphS2_31::
lock     
faceplayer     
msgbox SilphS2_Text_31, MSGBOX_DEFAULT
release     
end


SilphS2_Text_31:
	.string "That RED was skilled, but clearly, he was\n"
	.string "completely confined by the reality\l"
	.string "imposed by OAK. He wasn't free, unable\l"
	.string "to lift a finger without OAK's consent.\l"
	.string "That's why someone like RED could never\l"
	.string "be in a place like this. This room\l"
	.string "doesn't exist for him. In fact, this is a\l"
	.string "place 99% of KANTO's population would\l"
	.string "never believe, and that's precisely\l"
	.string "what makes us great.$"



SilphS2_33::
lock     
faceplayer     
msgbox SilphS2_Text_33, MSGBOX_DEFAULT
release     
end


SilphS2_Text_33:
.string "La pereza tiene una importante\n"
.string "ventaja sobre el resto de pasiones\l"
.string "para triunfar, y es precisamente\l"
.string "el hecho de no exigir nada.$"



SilphS2_34::
lock     
faceplayer     
msgbox SilphS2_Text_34, MSGBOX_DEFAULT
release     
end


SilphS2_Text_34:
.string "He oído que en la TORRE RADIO de\n"
.string "CIUDAD TRIGAL apenas cuentan con\l"
.string "seguridad, algún día se\l"
.string "arrepentirán de ello...$"



SilphS2_35::
lock     
faceplayer     
msgbox SilphS2_Text_35, MSGBOX_DEFAULT
release     
end


SilphS2_Text_35:
.string "KANTO cuenta con buenos POKÉMON,\n"
.string "sólidos y equilibrados, sin\l"
.string "embargo no es una región de\l"
.string "extremos, aquí no encontrarás a\l"
.string "nadie con el ATAQUE FÍSICO de un\l"
.string "HAXORUS, las defensas de SHUCKLE o\l"
.string "la VELOCIDAD de NINJASK, pero\l"
.string "igualmente puedes con POKÉMON de\l"
.string "KANTO formar un equipo que compita\l"
.string "con alguien que tenga a su\l"
.string "disposición a todos los POKÉMON\l"
.string "existentes, el hecho de contar con\l"
.string "más POKÉMON solo abre tus\l"
.string "opciones, puede dar una ventaja\l"
.string "estratégica, pero por nivel base,\l"
.string "los mejores POKÉMON y ENTRENADORES\l"
.string "pueden provenir de cualquier\l"
.string "lugar.$"



SilphS2_36::
lock     
faceplayer     
msgbox SilphS2_Text_36, MSGBOX_DEFAULT
release     
end


SilphS2_Text_36:
.string "Nadie fuera de estas paredes podrá\n"
.string "llegar a imaginar que al final del\l"
.string "día SILPH y el TEAM ROCKET son de\l"
.string "hecho socios, y por ahora así ha\l"
.string "de ser.$"



SilphS2_37::
lock     
faceplayer     
msgbox SilphS2_Text_37, MSGBOX_DEFAULT
release     
end


SilphS2_Text_37:
.string "¡Disciplina, orden y paciencia!\n"
.string "¡Los 3 pilares de SILPH!\l"
.string "¡Jamás lo olvides chico!$"



SilphS2_38::
lock     
faceplayer     
msgbox SilphS2_Text_38, MSGBOX_DEFAULT
release     
end


SilphS2_Text_38:
.string "SILPH guarda muchos secretos en su\n"
.string "interior que algunos como ese ROJO\l"
.string "como mucho podrán albergar en su\l"
.string "imaginación, este lugar es uno de\l"
.string "esos secretos.$"



SilphS2_39::
lock     
faceplayer     
msgbox SilphS2_Text_39, MSGBOX_DEFAULT
release     
end


SilphS2_Text_39:
.string "Deberías de visitar JOHTO al menos\n"
.string "una vez en la vida, lugares como\l"
.string "la SENDA DINDÓN o el LAGO DE LA\l"
.string "FURIA me hacen preguntarme en qué\l"
.string "momento renunciamos a vivir en\l"
.string "zonas rurales en beneficio de las\l"
.string "ciudades.$"



SilphS2_41::
lock     
faceplayer     
msgbox SilphS2_Text_41, MSGBOX_DEFAULT
release     
end


SilphS2_Text_41:
.string "Muchos cambios se avecinan en\n"
.string "KANTO, estate atento ROCKET,\l"
.string "vuestra organización puede\l"
.string "desempeñar un papel fundamental en\l"
.string "el devenir de esta región.$"



SilphS2_42::
lock     
faceplayer     
msgbox SilphS2_Text_42, MSGBOX_DEFAULT
release     
end


SilphS2_Text_42:
.string "¡Esos ilusos de PUEBLO LAVANDA y\n"
.string "su POKÉMON ESENCIA!\l"
.string "¡La esencia está aquí, en las\l"
.string "oficinas de SILPH S.A. donde cada\l"
.string "día nos superamos a nosotros\l"
.string "mismos!$"



SilphS2_43::
lock     
faceplayer     
msgbox SilphS2_Text_43, MSGBOX_DEFAULT
release     
end


SilphS2_Text_43:
.string "La única forma de no acabar siendo\n"
.string "criticado es no decir nada, no\l"
.string "hacer nada, no ser nadie.$"



SilphS2_46::
lock     
faceplayer     
msgbox SilphS2_Text_46, MSGBOX_DEFAULT
release     
end


SilphS2_Text_46:
.string "La empresa DEVON en HOENN es muy\n"
.string "hermética con todo lo que\l"
.string "desarrolla y produce, mantiene\l"
.string "bajo llave el misterio de los\l"
.string "FÓSILES y POKÉMON ANCESTRALES\l"
.string "propios de su región, jamás\l"
.string "publicaron ningún avanze en cuanto\l"
.string "a creación de un POKÉMON propio a\l"
.string "diferencia nuestra con PORYGON y\l"
.string "más recientemente PORYGON2.$"



SilphS2_47::
lock     
faceplayer     
msgbox SilphS2_Text_47, MSGBOX_DEFAULT
release     
end


SilphS2_Text_47:
.string "Solo los disciplinados son libres\n"
.string "en la vida, si eres\l"
.string "indisciplinado, eres un esclavo de\l"
.string "tus estados de ánimo.$"



SilphS2_48::
lock     
faceplayer     
msgbox SilphS2_Text_48, MSGBOX_DEFAULT
release     
end


SilphS2_Text_48:
.string "No importa si ganas por mucho o\n"
.string "por poco, ganar es ganar.\l"
.string "A nadie le importa si a causa de\l"
.string "un tropiezo perdiste injustamente\l"
.string "en el último momento, nadie se\l"
.string "acuerda de un segundo lugar, en el\l"
.string "medallero olímpico da igual que\l"
.string "tengas 50 medallas de plata, si tu\l"
.string "rival tiene una sola más de oro,\l"
.string "quedará por delante en la\l"
.string "clasificación global, para alguien\l"
.string "anclado solo en el resultado final\l"
.string "la sola idea de que no pueda\l"
.string "acabar ganando realmente el mejor\l"
.string "es desalentadora, ante esto solo\l"
.string "nos queda ver el resultado final\l"
.string "como una consecuencia de nuestro\l"
.string "trabajo previo, no el fin último.$"



SilphS2_50::
lock     
faceplayer     
msgbox SilphS2_Text_50, MSGBOX_DEFAULT
release     
end


SilphS2_Text_50:
.string "La línea evolutiva de MAGNETON\n"
.string "tiene mucho potencial, sabemos de\l"
.string "la existencia de MAGNEZONE, no\l"
.string "obstante, creemos que ese no es el\l"
.string "verdadero techo de este POKÉMON,\l"
.string "su fisionomía le permite,\l"
.string "teóricamente, ser capaz de generar\l"
.string "descargas eléctricas que se\l"
.string "reirían de las de un ZAPDOS.$"



SilphS2_52::
lock     
faceplayer     
msgbox SilphS2_Text_52, MSGBOX_DEFAULT
release     
end


SilphS2_Text_52:
.string "La línea evolutiva de PORYGON\n"
.string "tiene mucho potencial aún por\l"
.string "explotar, el no estar sujeto a\l"
.string "nuestro plano físico le da muchas\l"
.string "ventajas respecto al resto de\l"
.string "POKÉMON.$"



SilphS2_53::
lock     
faceplayer     
msgbox SilphS2_Text_53, MSGBOX_DEFAULT
release     
end


SilphS2_Text_53:
.string "La discrección de este lugar es\n"
.string "sagrada, si se diera a conocer al\l"
.string "público, perdería su magia, su\l"
.string "esencia, espero que seas\l"
.string "consciente de esto.$"



SilphS2Documento_100::
lock     
showmonpic SPECIES_PORYGON_Z, 10, 3  
playmoncry SPECIES_PORYGON_Z, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_100:
.string "PORYGON-Z:\p"
	.string "PS: 85\n"
	.string "ATAQUE: 80\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 145\l"
	.string "DEFENSA ESPECIAL: 75\l"
	.string "VELOCIDAD: 90\l"
	.string "TOTAL: 545\p"
	.string "Surgido a partir de un fallo en\n"
	.string "busca de un PORYGON3 que\l"
	.string "exprimiese al máximo el potencial\l"
	.string "de PORYGON, este PORYGON-Z surgido\l"
	.string "ha resultado tener una capacidad\l"
	.string "ofensiva desbordante, con un\l"
	.string "ATAQUE ESPECIAL de 145 de BASE\l"
	.string "superando a GENGAR como el no\l"
	.string "legendario de KANTO con mayor\l"
	.string "ATAQUE ESPECIAL, únicamente\l"
	.string "superado por MEWTWO, otro POKÉMON\l"
	.string "creado por la ciencia.$"



SilphS2Documento_101::
lock     
showmonpic SPECIES_SHARPEDO, 10, 3  
playmoncry SPECIES_SHARPEDO, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_101:
	.string "SHARPEDO:\p"
	.string "PS: 70\n"
	.string "ATAQUE: 140\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 75\l"
	.string "DEFENSA ESPECIAL: 70\l"
	.string "VELOCIDAD: 115\l"
	.string "TOTAL: 540\p"
	.string "El terror de los mares de HOENN,\n"
	.string "dueño de la mordedura más potente\l"
	.string "conocida con un triturar por STAB\l"
	.string "devastador, las salvajes aguas de\l"
	.string "HOENN obligaron a SHARPEDO a\l"
	.string "adaptarse hasta convertirse en uno\l"
	.string "de los POKÉMON más bravos del mar,\l"
	.string "muy preciado y temido por\l"
	.string "cualquier marinero.$"



SilphS2Documento_102::
lock     
showmonpic SPECIES_CAMERUPT, 10, 3  
playmoncry SPECIES_CAMERUPT, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_102:
	.string "CAMERUPT:\p"
	.string "PS: 70\n"
	.string "ATAQUE: 120\l"
	.string "DEFENSA: 100\l"
	.string "ATAQUE ESPECIAL: 145\l"
	.string "DEFENSA ESPECIAL: 95\l"
	.string "VELOCIDAD: 10\l"
	.string "TOTAL: 540\p"
	.string "El camello de carga de HOENN, con\n"
	.string "una relación ATAQUE-DEFENSA\l"
	.string "inexistente aquí en KANTO, pagando\l"
	.string "por ello con una velocidad de solo\l"
	.string "10 puntos, se cree que la enorme\l"
	.string "potencia de su TIERRA VIVA y\l"
	.string "ESTALLIDO influyeron en el proceso\l"
	.string "de emersión de HOENN.$"



SilphS2Documento_103::
lock     
showmonpic SPECIES_FLOETTE_ETERNAL_FLOWER, 10, 3  
playmoncry SPECIES_FLOETTE_ETERNAL_FLOWER, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_103:
	.string "FLOETTE-ETERNO:\p"
	.string "PS: 74\n"
	.string "ATAQUE: 65\l"
	.string "DEFENSA: 67\l"
	.string "ATAQUE ESPECIAL: 125\l"
	.string "DEFENSA ESPECIAL: 128\l"
	.string "VELOCIDAD: 92\l"
	.string "TOTAL: 551\p"
	.string "POKÉMON de procedencia única, se\n"
	.string "cree que su ENTRENADOR logró\l"
	.string "devolverle a la vida durante la\l"
	.string "guerra que asoló KALOS, los\l"
	.string "mecanismos mediante los que\l"
	.string "supuestamente logró tal hazaña nos\l"
	.string "son desconocidos.$"
