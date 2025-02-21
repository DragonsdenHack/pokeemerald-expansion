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
delay 10
msgbox SilphS2_Text_12.1, MSGBOX_DEFAULT
release     
end


SilphS2_Text_12:
.string "Si quieres pedirle algo a alguien,\n"
.string "que sea una persona ocupada; esta\l"
.string "llevará tal inercia de trabajo que\l"
.string "tu petición no será más que otra\l"
.string "tarea más a realizar sobre la marcha.$"

SilphS2_Text_12.1:
.string "En cambio, quien no tiene nada que\n"
.string "hacer, deberá poner mucha más energía\l"
.string "en ponerse en movimiento exclusivamente\l"
.string "para llevar a cabo tu petición.\p"
.string "Las leyes de inercia y coeficiente\n"
.string "de rozamiento también pueden ser\l"
.string "aplicables a las personas.$"



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
.string "Prefiero invertir mi tiempo en hacer\n"
.string "la tarea, que en malgastarlo en hablar\l"
.string "y formular 1000 teorías acerca de\l"
.string "cómo hacer la tarea.$"

SilphS2_20_5::
lock     
faceplayer     
msgbox SilphS2_Text_20_5, MSGBOX_DEFAULT
release     
end


SilphS2_Text_20_5:
	.string "Trabajamos y somos explotados durante\n"
	.string "el año para poder viajar y explotar a\l"
	.string "otros en verano.$"



SilphS2_20::
lock     
faceplayer     
msgbox SilphS2_Text_20, MSGBOX_DEFAULT
release     
end


SilphS2_Text_20:
	.string "You reckon I'm plotting some evil\n"
	.string "scheme or creating a kick-ass POKÉMON\l"
	.string "on my computer?{PAUSE 20}…{PAUSE 20} Spot on!$"

SilphS2_Text_20_EventScript_TM132::
	lock
	faceplayer
	goto_if_set FLAG_HOENN_171, SilphS2_Text_20_EventScript_ReceivedTM33
	msgbox SilphS2_Text_20_Text_TM33, MSGBOX_DEFAULT
	giveitem ITEM_TM132
	setflag FLAG_HOENN_171
	msgbox SilphS2_Text_20_Text_ExplainTM33, MSGBOX_DEFAULT
	release
	end

SilphS2_Text_20_EventScript_ReceivedTM33::
	msgbox SilphS2_Text_20_Text_ExplainTM33, MSGBOX_DEFAULT
	release
	end

SilphS2_Text_20_Text_TM33:
.string "¿Crees que estoy maquinando algún\n"
.string "plan maléfico?\l"
.string "¿O creando algún Pokémon\l"
.string "invencible desde mi computadora?\l"
.string "{PAUSE 15}…{PAUSE 15}\l"
.string "¡Estás en lo cierto!$"

SilphS2_Text_20_Text_ExplainTM33:
	.string "Con MAQUINACIÓN, elevarás\n"
	.string "drásticamente el AT.ESPECIAL\l"
	.string "del POKÉMON que lo ejecute.\l"
	.string "Es sorprendente lo que puede\l"
	.string "lograr uno por su propia cuenta.\l"
	.string "¿No crees?$"



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
	.string "stuff happen here end up in prison.$"



SilphS2_24::
lock     
faceplayer     
msgbox SilphS2_Text_24, MSGBOX_DEFAULT
release     
end


SilphS2_Text_24:
	.string "Honestly, we were sick of the rules set\n"
	.string "by LANCE's government. For every 10\l"
	.string "POKÉ we made, 8 went straight to\l"
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
	.string "Laziness possesses a distinct\n"
	.string "advantage over other motivations in\l"
	.string "the pursuit of success it requires\l"
	.string "absolutely nothing.$"



SilphS2_34::
lock     
faceplayer     
msgbox SilphS2_Text_34, MSGBOX_DEFAULT
release     
end


SilphS2_Text_34:
	.string "I've heard that security is scarce at\n"
	.string "the GOLDENROD RADIO TOWER; someday,\l"
	.string "they'll regret it…$"



SilphS2_35::
lock     
faceplayer     
msgbox SilphS2_Text_35, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_35.1, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_35.2, MSGBOX_DEFAULT
release     
end


SilphS2_Text_35:
.string "KANTO cuenta con buenos POKÉMON, sólidos\n"
.string "y equilibrados, sin embargo, no es una\l"
.string "región de extremos; aquí no encontrarás\l"
.string "a nadie con el ATAQUE FÍSICO de un\l"
.string "HAXORUS, las defensas de SHUCKLE o\l"
.string "la VELOCIDAD de NINJASK.\p"
.string "Pero no importa, puedes, con POKÉMON\n"
.string "de KANTO, formar un equipo que compita\l"
.string "con alguien que tenga a su disposición\l"
.string "a todos los POKÉMON que existen.$"

SilphS2_Text_35.1:
.string "Contar con más POKÉMON abre tu abanico\n"
.string "de opciones, puede dar una ventaja\l"
.string "estratégica, pero también vuelve la\l"
.string "elección más difícil.$"

SilphS2_Text_35.2:
.string "Al final, los mejores POKÉMON y\n"
.string "ENTRENADORES pueden provenir de\l"
.string "cualquier lugar.$"



SilphS2_36::
lock     
faceplayer     
msgbox SilphS2_Text_36, MSGBOX_DEFAULT
release     
end


SilphS2_Text_36:
	.string "Outside these walls, it's inconceivable\n"
	.string "that SILPH and TEAM ROCKET are, in\l"
	.string "fact, allies at the end of the day. For\l"
	.string "now, that's how it must remain.$"



SilphS2_37::
lock     
faceplayer     
msgbox SilphS2_Text_37, MSGBOX_DEFAULT
release     
end


SilphS2_Text_37:
	.string "Remember: discipline, order, and\n"
	.string "patience are the three pillars of\l"
	.string "SILPH! It's crucial, young one!$"



SilphS2_38::
lock     
faceplayer     
msgbox SilphS2_Text_38, MSGBOX_DEFAULT
release     
end


SilphS2_Text_38:
	.string "Within the walls of SILPH lie countless\n"
	.string "secrets, mysteries that people like\l"
	.string "that enigmatic RED, could dare to\l"
	.string "conceive.$"




SilphS2_39::
lock     
faceplayer     
msgbox SilphS2_Text_39, MSGBOX_DEFAULT
release     
end


SilphS2_Text_39:
	.string "You should visit Johto at least once in\n"
	.string "your life, places like TIN TOWER or the\l"
	.string "LAKE OF RAGE make me wonder at what\l"
	.string "point we gave up living in rural areas\l"
	.string "for the sake of cities.$"



SilphS2_41::
lock     
faceplayer     
msgbox SilphS2_Text_41, MSGBOX_DEFAULT
release     
end


SilphS2_Text_41:
	.string "Many changes are on the horizon in\n"
	.string "KANTO. Watch out ROCKET, your\l"
	.string "organization could play a pivotal role\l"
	.string "in the future of this region.$"



SilphS2_42::
lock     
faceplayer     
msgbox SilphS2_Text_42, MSGBOX_DEFAULT
release     
end


SilphS2_Text_42:
	.string "LAVENDER TOWN's naive believers and\n"
	.string "their ESSENCE POKÉMON! The true\l"
	.string "essence resides here, within the halls\l"
	.string "of SILPH CO, where we surpass\l"
	.string "ourselves daily!$"



SilphS2_43::
lock     
faceplayer     
msgbox SilphS2_Text_43, MSGBOX_DEFAULT
release     
end


SilphS2_Text_43:
	.string "The only way to avoid ending up being\n"
	.string "criticized is saying nothing, doing\l"
	.string "nothing, being nobody.$"



SilphS2_46::
lock     
faceplayer     
msgbox SilphS2_Text_46, MSGBOX_DEFAULT
release     
end


SilphS2_Text_46:
	.string "The DEVON corporation in HOENN\n"
	.string "operates with a high degree of secrecy\l"
	.string "surrounding its developmental projects\l"
	.string "and output, holding the mysteries of\l"
	.string "FOSSILS and ANCIENT POKÉMON unique to\l"
	.string "its region closely guarded. Unlike our\l"
	.string "endeavors with creations such as\l"
	.string "PORYGON and the more recent PORYGON2,\l"
	.string "they have refrained from publicly\l"
	.string "disclosing any advancements in POKÉMON\l"
	.string "creation.$"



SilphS2_47::
lock     
faceplayer     
msgbox SilphS2_Text_47, MSGBOX_DEFAULT
release     
end


SilphS2_Text_47:
	.string "In life's dance, only the disciplined\n"
	.string "find true freedom, while the\l"
	.string "undisciplined remain shackled to the\l"
	.string "caprice of their emotions.$"



SilphS2_48::
lock     
faceplayer     
msgbox SilphS2_Text_48, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_48.1, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_48.2, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_48.3, MSGBOX_DEFAULT
release     
end


SilphS2_Text_48:
.string "No importa si ganas por mucho o\n"
.string "por poco, ganar es ganar.$"

SilphS2_Text_48.1:
.string "A nadie le importa si a causa de\n"
.string "un tropiezo perdiste injustamente\l"
.string "en el último momento, nadie se\l"
.string "acuerda de un segundo lugar; en el\l"
.string "medallero olímpico, da igual que\l"
.string "tengas 50 medallas de plata, si tu\l"
.string "rival tiene una sola más de oro,\l"
.string "quedará por delante en la\l"
.string "clasificación global.$" 

SilphS2_Text_48.2:
.string "Para alguien anclado solo en el\n"
.string "resultado final, la sola idea de que\l"
.string "no pueda acabar ganando realmente el\l"
.string "mejor es desalentadora.$"

SilphS2_Text_48.3:
.string "Ante esto, solo queda ver el resultado\n"
.string "como una consecuencia de nuestro\l"
.string "trabajo previo, no el fin último.$"



SilphS2_50::
lock     
faceplayer     
msgbox SilphS2_Text_50, MSGBOX_DEFAULT
release     
end


SilphS2_Text_50:
	.string "The evolution line of MAGNETON holds\n"
	.string "significant potential. We're aware of\l"
	.string "the existence of MAGNEZONE; however,\l"
	.string "we believe that's not the true pinnacle\l"
	.string "of this POKÉMON. Its physiology\l"
	.string "theoretically enables it to generate\l"
	.string "electrical discharges that would put\l"
	.string "ZAPDOS's to shame.$"



SilphS2_52::
lock     
faceplayer     
msgbox SilphS2_Text_52, MSGBOX_DEFAULT
release     
end


SilphS2_Text_52:
	.string "The evolution line of PORYGON holds\n"
	.string "much untapped potential, its lack of\l"
	.string "adherence to our physical plane grants\l"
	.string "it many advantages over other POKÉMON.$"



SilphS2_53::
lock     
faceplayer     
msgbox SilphS2_Text_53, MSGBOX_DEFAULT
release     
end


SilphS2_Text_53:
	.string "The confidentiality of this place is\n"
	.string "sacred; were its existence made public,\l"
	.string "it would forfeit its enchantment, its\l"
	.string "essence. I trust you comprehend the\l"
	.string "significance.$"



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
	.string "HP: 85\n"
	.string "ATTACK: 80\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 145\l"
	.string "SPECIAL DEFENSE: 75\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 545\p"
	.string "TYPE: NORMAL\n"
	.string "Born out of a glitch in the quest for a\l"
	.string "PORYGON3 to push PORYGON's\l"
	.string "capabilities to their limit, this newly\l"
	.string "emerged PORYGON-Z has shown to\l"
	.string "possess overwhelming offensive\l"
	.string "capabilities, boasting a base SPECIAL\l"
	.string "ATTACK of 145, surpassing\l"
	.string "GENGAR-ALAKAZAM as the non-legendary\l"
	.string "KANTO POKÉMON with the highest\l"
	.string "SPECIAL ATTACK. Only MEWTWO, another\l"
	.string "POKÉMON engineered through science,\l"
	.string "has more SPECIAL ATTACK.$"




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
	.string "HP: 70\n"
	.string "ATTACK: 140\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 75\l"
	.string "SPECIAL DEFENSE: 70\l"
	.string "SPEED: 115\l"
	.string "TOTAL: 540\p"
	.string "The dread of HOENN's seas, wielding the\n"
	.string "most potent bite known, empowered by a\l"
	.string "devastating STAB CRUNCH, the fierce\l"
	.string "waters of HOENN coerced SHARPEDO to\l"
	.string "adapt, evolving it into one of the sea's\l"
	.string "most valiant POKÉMON, highly coveted\l"
	.string "and dreaded by sailors.$"



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
	.string "HP: 70\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 100\l"
	.string "SPECIAL ATTACK: 145\l"
	.string "SPECIAL DEFENSE: 95\l"
	.string "SPEED: 10\l"
	.string "TOTAL: 540\p"
	.string "The workhorse camel of HOENN,\n"
	.string "showcasing a non-existent\l"
	.string "ATTACK-DEFENSE ratio in KANTO. Paying\l"
	.string "this with an extremely low speed of\l"
	.string "merely 10 points. Thought to be\l"
	.string "influenced by the tremendous force of\l"
	.string "its EARTQUAKE and EARTH POWER during\l"
	.string "the HOENN emergence.$"



SilphS2Documento_103::
lock     
showmonpic SPECIES_FLOETTE_ETERNAL_FLOWER, 10, 3  
playmoncry SPECIES_FLOETTE_ETERNAL_FLOWER, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_103:
	.string "FLOETTE-ETERNAL FLOWER:\p"
	.string "HP: 74\n"
	.string "ATTACK: 65\l"
	.string "DEFENSE: 67\l"
	.string "SPECIAL ATTACK: 125\l"
	.string "SPECIAL DEFENSE: 128\l"
	.string "SPEED: 92\l"
	.string "TOTAL: 551\p"
	.string "A POKÉNON of singular origin, it's\n"
	.string "believed that its TRAINER succeeded in\l"
	.string "resurrecting it during the war that\l"
	.string "ravaged KALOS; however, the methods by\l"
	.string "which he supposedly accomplished this\l"
	.string "feat are unknown to us.$"

Silph_S2_Discoxtrano::
lock     
faceplayer  
goto_if_set FLAG_UNUSED_0x270, Silph_S2_Discoxtrano_Despues
msgbox Silph_S2_Discoxtrano_Text_2, MSGBOX_NPC
playfanfare MUS_OBTAIN_ITEM
additem ITEM_DUBIOUS_DISC
msgbox Silph_S2_Discoxtrano_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_UNUSED_0x270
release     
end

Silph_S2_Discoxtrano_Text_2:
	.string "Someone like you should have access to\n"
	.string "the very latest in technology. It is\l"
	.string "said that the PRESIDENT gifted you a\l"
	.string "PORYGON, along with an UPGRADE to\l"
	.string "evolve it into PORYGON2. If you wish to\l"
	.string "go further, this item is for you.$"

Silph_S2_Discoxtrano_Despues::
msgbox Silph_S2_Discoxtrano_Text_1, MSGBOX_AUTOCLOSE
release
end

Silph_S2_Discoxtrano_Texto_1.1:
.string "{PLAYER} obtained the DUBIOUS\n"
	.string "DISC from Scientist!$"

Silph_S2_Discoxtrano_Text_1:
	.string "Con el DISCOXTRAÑO podrás evolucionar\n"
	.string "a PORYGON2 en PORYGON-Z, una versión\l"
	.string "algo más vulnerable a los ataques, pero\l"
	.string "con una ofensiva extraordinaria.$"

Silph_S2_Llave_Texto_1:
	.string "Se requiere de una llave especial.$"

Silph_S2_Llave_Texto_2:
	.string "¿Quieres usar la LLAVE SILPH S3?$"

Silph_S2_Llave::
compare VAR_UNUSED_0x40F8, 11
goto_if_gt Silph_S2_Llave_Despues
delay 10
msgbox Silph_S2_Llave_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Silph_S2_Llave_Despues::
delay 10
msgbox Silph_S2_Llave_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 11, 32, 0x334, FALSE
setmetatile 11, 33, 0x334, FALSE
setmetatile 11, 34, 0x334, FALSE
setmetatile 12, 32, 0x334, FALSE
setmetatile 12, 33, 0x334, FALSE
setmetatile 12, 34, 0x334, FALSE
setmetatile 13, 32, 0x334, FALSE
setmetatile 13, 33, 0x334, FALSE
setmetatile 13, 34, 0x334, FALSE
setmetatile 10, 32, 0x335, FALSE
setmetatile 10, 33, 0x335, FALSE
special DrawWholeMapView
delay 20
release
end

Base_Johto_Llave_Derecha::
compare VAR_UNUSED_0x40F7, 153
goto_if_gt Base_Johto_Llave_Derecha_Despues
delay 10
msgbox Base_Johto_Llave_Derecha_Despues_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Base_Johto_Llave_Derecha_Despues::
delay 10
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 17, 54, 0x347, FALSE
setmetatile 18, 54, 0x346, FALSE
setmetatile 17, 55, 0x335, FALSE
setmetatile 18, 55, 0x335, FALSE
setmetatile 17, 56, 0x339, FALSE
setmetatile 18, 56, 0x33A, FALSE
setmetatile 19, 56, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Base_Johto_Llave_Izquierda::
compare VAR_UNUSED_0x40F7, 153
goto_if_gt Base_Johto_Llave_Izquierda_Despues
delay 10
msgbox Base_Johto_Llave_Derecha_Despues_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Base_Johto_Llave_Izquierda_Despues::
delay 10
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 13, 54, 0x347, FALSE
setmetatile 14, 54, 0x346, FALSE
setmetatile 13, 55, 0x335, FALSE
setmetatile 14, 55, 0x335, FALSE
setmetatile 13, 56, 0x339, FALSE
setmetatile 14, 56, 0x33A, FALSE
setmetatile 15, 56, 0x334, FALSE
special DrawWholeMapView
delay 20
release
end

Base_Johto_Llave_Derecha_Despues_Texto_1:
	.string "Se requiere de una llave especial.$"

Base_Johto_Llave_Derecha_Despues_Texto_2:
	.string "¿Quieres ir al P2 de la BASE?$"
