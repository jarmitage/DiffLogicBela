#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

void logic_gate_net(char const *inp, char *out) {
	const char v0 = (char) (inp[8] & inp[29]);
	const char v1 = (char) (~inp[27]);
	const char v2 = (char) (~inp[24]);
	const char v3 = (char) (inp[65]);
	const char v4 = (char) (~inp[59]);
	const char v5 = (char) (inp[69] | inp[35]);
	const char v6 = (char) (inp[54]);
	const char v7 = (char) (~(inp[67] | inp[19]));
	const char v8 = (char) (~inp[76] | inp[48]);
	const char v9 = (char) (~inp[1]);
	const char v10 = (char) (~inp[24] | inp[34]);
	const char v11 = (char) (~(inp[68] | inp[15]));
	const char v12 = (char) (inp[5]);
	const char v13 = (char) (inp[43]);
	const char v14 = (char) (inp[50]);
	const char v15 = (char) (inp[80] & ~inp[46]);
	const char v16 = (char) (inp[52] ^ inp[44]);
	const char v17 = (char) (~(inp[17] ^ inp[46]));
	const char v18 = (char) (~(inp[30] & inp[24]));
	const char v19 = (char) (inp[71] & ~inp[79]);
	const char v20 = (char) (~inp[18]);
	const char v21 = (char) (inp[79]);
	const char v22 = (char) (inp[31] ^ inp[30]);
	const char v23 = (char) (inp[37]);
	const char v24 = (char) (inp[71] | inp[26]);
	const char v25 = (char) (~inp[10] | inp[56]);
	const char v26 = (char) (~inp[2]);
	const char v27 = (char) (~inp[46] | inp[32]);
	const char v28 = (char) ((char) 0);
	const char v29 = (char) (~(inp[41] | inp[49]));
	const char v30 = (char) (inp[69] ^ inp[56]);
	const char v31 = (char) (~inp[71] | inp[70]);
	const char v32 = (char) (~(char) 0);
	const char v33 = (char) ((char) 0);
	const char v34 = (char) (~inp[58]);
	const char v35 = (char) (inp[68]);
	const char v36 = (char) (inp[22] ^ inp[78]);
	const char v37 = (char) ((char) 0);
	const char v38 = (char) (inp[4] & ~inp[74]);
	const char v39 = (char) (~(inp[80] & inp[43]));
	const char v40 = (char) (inp[44]);
	const char v41 = (char) (inp[44]);
	const char v42 = (char) (inp[17]);
	const char v43 = (char) (~inp[51] | inp[63]);
	const char v44 = (char) (~(inp[77] | inp[39]));
	const char v45 = (char) (~inp[66] | inp[23]);
	const char v46 = (char) (inp[58] & ~inp[52]);
	const char v47 = (char) (inp[53] & ~inp[76]);
	const char v48 = (char) (~inp[45]);
	const char v49 = (char) (inp[30]);
	const char v50 = (char) (~inp[32]);
	const char v51 = (char) (~inp[16] | inp[53]);
	const char v52 = (char) (inp[35] ^ inp[59]);
	const char v53 = (char) (inp[9]);
	const char v54 = (char) (~inp[69]);
	const char v55 = (char) (~(inp[17] ^ inp[37]));
	const char v56 = (char) (~inp[45]);
	const char v57 = (char) (inp[38] & ~inp[10]);
	const char v58 = (char) (~inp[11] | inp[70]);
	const char v59 = (char) ((char) 0);
	const char v60 = (char) (~(inp[8] ^ inp[9]));
	const char v61 = (char) ((char) 0);
	const char v62 = (char) (inp[23]);
	const char v63 = (char) (~inp[81] | inp[7]);
	const char v64 = (char) (inp[4] & ~inp[40]);
	const char v65 = (char) (inp[6] & ~inp[67]);
	const char v66 = (char) (inp[73]);
	const char v67 = (char) (~inp[22]);
	const char v68 = (char) (inp[21] & ~inp[21]);
	const char v69 = (char) (inp[80] | inp[25]);
	const char v70 = (char) (~inp[1]);
	const char v71 = (char) (~inp[65]);
	const char v72 = (char) (inp[31] & ~inp[64]);
	const char v73 = (char) (inp[46] & ~inp[77]);
	const char v74 = (char) (inp[40] & ~inp[23]);
	const char v75 = (char) (~inp[75]);
	const char v76 = (char) (~inp[43]);
	const char v77 = (char) (inp[40] ^ inp[13]);
	const char v78 = (char) (inp[36] & ~inp[36]);
	const char v79 = (char) (inp[60]);
	const char v80 = (char) (inp[61] & ~inp[38]);
	const char v81 = (char) (~inp[32] | inp[74]);
	const char v82 = (char) (~(inp[10] ^ inp[55]));
	const char v83 = (char) (inp[51]);
	const char v84 = (char) (~inp[74] | inp[25]);
	const char v85 = (char) (inp[37]);
	const char v86 = (char) (inp[7] & inp[83]);
	const char v87 = (char) (inp[62] & ~inp[32]);
	const char v88 = (char) (inp[67]);
	const char v89 = (char) (~(inp[77] & inp[33]));
	const char v90 = (char) (~inp[1] | inp[73]);
	const char v91 = (char) (inp[39]);
	const char v92 = (char) (~(inp[71] ^ inp[29]));
	const char v93 = (char) (inp[11] & ~inp[18]);
	const char v94 = (char) (inp[42] & ~inp[78]);
	const char v95 = (char) (inp[59] ^ inp[56]);
	const char v96 = (char) (~(inp[57] ^ inp[36]));
	const char v97 = (char) (inp[33]);
	const char v98 = (char) (inp[18] & inp[55]);
	const char v99 = (char) (inp[20]);
	const char v100 = (char) (inp[28] | inp[30]);
	const char v101 = (char) (~inp[70] | inp[6]);
	const char v102 = (char) (inp[9]);
	const char v103 = (char) (inp[79]);
	const char v104 = (char) (~(inp[76] ^ inp[13]));
	const char v105 = (char) (inp[8]);
	const char v106 = (char) (~inp[47] | inp[66]);
	const char v107 = (char) (inp[64]);
	const char v108 = (char) (~inp[15]);
	const char v109 = (char) (~inp[16]);
	const char v110 = (char) (~inp[34] | inp[23]);
	const char v111 = (char) (inp[16] | inp[25]);
	const char v112 = (char) (inp[58] ^ inp[79]);
	const char v113 = (char) (inp[45]);
	const char v114 = (char) (~(inp[10] & inp[12]));
	const char v115 = (char) (~inp[19] | inp[44]);
	const char v116 = (char) (~(inp[68] ^ inp[28]));
	const char v117 = (char) (inp[59]);
	const char v118 = (char) (~(inp[31] & inp[4]));
	const char v119 = (char) (~inp[22] | inp[39]);
	const char v120 = (char) (~(inp[4] & inp[81]));
	const char v121 = (char) (~(char) 0);
	const char v122 = (char) (inp[50]);
	const char v123 = (char) (~(inp[9] | inp[28]));
	const char v124 = (char) (~inp[0] | inp[21]);
	const char v125 = (char) (inp[57] & ~inp[0]);
	const char v126 = (char) (inp[6] & ~inp[61]);
	const char v127 = (char) (inp[72]);
	const char v128 = (char) (inp[52]);
	const char v129 = (char) (inp[72]);
	const char v130 = (char) (~inp[70]);
	const char v131 = (char) (~inp[64]);
	const char v132 = (char) (~(char) 0);
	const char v133 = (char) (inp[22]);
	const char v134 = (char) (~inp[38]);
	const char v135 = (char) ((char) 0);
	const char v136 = (char) (~inp[2]);
	const char v137 = (char) (~inp[2]);
	const char v138 = (char) (inp[83] & inp[27]);
	const char v139 = (char) (~inp[83]);
	const char v140 = (char) (inp[35]);
	const char v141 = (char) (~(inp[42] | inp[27]));
	const char v142 = (char) (~inp[72]);
	const char v143 = (char) (inp[64] & ~inp[65]);
	const char v144 = (char) (inp[15]);
	const char v145 = (char) (~inp[13]);
	const char v146 = (char) ((char) 0);
	const char v147 = (char) (~inp[63]);
	const char v148 = (char) (~(inp[80] & inp[66]));
	const char v149 = (char) (~inp[2]);
	const char v150 = (char) (~inp[53]);
	const char v151 = (char) (~inp[57]);
	const char v152 = (char) (~(inp[62] | inp[52]));
	const char v153 = (char) (inp[11] ^ inp[14]);
	const char v154 = (char) (~(inp[20] ^ inp[53]));
	const char v155 = (char) (~inp[1]);
	const char v156 = (char) (inp[37]);
	const char v157 = (char) (inp[63] & inp[78]);
	const char v158 = (char) (~(inp[82] ^ inp[34]));
	const char v159 = (char) (inp[0]);
	const char v160 = (char) (~(inp[65] & inp[73]));
	const char v161 = (char) ((char) 0);
	const char v162 = (char) (~inp[50]);
	const char v163 = (char) (~inp[18] | inp[15]);
	const char v164 = (char) (~(inp[69] & inp[8]));
	const char v165 = (char) (~(inp[3] & inp[5]));
	const char v166 = (char) (~(inp[75] ^ inp[49]));
	const char v167 = (char) (~(inp[24] & inp[61]));
	const char v168 = (char) (v63);
	const char v169 = (char) (v159 & ~v0);
	const char v170 = (char) (~v137 | v75);
	const char v171 = (char) (~v123);
	const char v172 = (char) (~v137);
	const char v173 = (char) (v34);
	const char v174 = (char) (~v46);
	const char v175 = (char) (v44 & ~v17);
	const char v176 = (char) (~v167 | v76);
	const char v177 = (char) (~(v12 & v98));
	const char v178 = (char) (v38 | v115);
	const char v179 = (char) (v107 & ~v167);
	const char v180 = (char) (v48 & v163);
	const char v181 = (char) (~(v152 | v72));
	const char v182 = (char) (~(v108 & v113));
	const char v183 = (char) (~(v158 | v125));
	const char v184 = (char) (~v13 | v94);
	const char v185 = (char) (v128);
	const char v186 = (char) (v2 & ~v155);
	const char v187 = (char) (v92);
	const char v188 = (char) (~v1);
	const char v189 = (char) (~(v5 | v161));
	const char v190 = (char) (v65 | v130);
	const char v191 = (char) (~(char) 0);
	const char v192 = (char) (v54);
	const char v193 = (char) (v74 & ~v151);
	const char v194 = (char) (~v123);
	const char v195 = (char) (~(v10 & v7));
	const char v196 = (char) (~v4);
	const char v197 = (char) (~v14 | v166);
	const char v198 = (char) (~v35 | v4);
	const char v199 = (char) (v49 | v156);
	const char v200 = (char) (v113);
	const char v201 = (char) (~v3);
	const char v202 = (char) (~v136);
	const char v203 = (char) (~v80);
	const char v204 = (char) (~v49 | v149);
	const char v205 = (char) (v145);
	const char v206 = (char) (~(v159 & v143));
	const char v207 = (char) (v161 ^ v18);
	const char v208 = (char) (~v122);
	const char v209 = (char) ((char) 0);
	const char v210 = (char) (~v36);
	const char v211 = (char) (v134);
	const char v212 = (char) (v11 & ~v127);
	const char v213 = (char) (~v13 | v58);
	const char v214 = (char) (~v41);
	const char v215 = (char) (v42 & ~v97);
	const char v216 = (char) (~(v156 & v77));
	const char v217 = (char) (~v23);
	const char v218 = (char) (v119 & ~v76);
	const char v219 = (char) (~v129);
	const char v220 = (char) (v109);
	const char v221 = (char) (~v90 | v22);
	const char v222 = (char) (~v128);
	const char v223 = (char) (~(v55 | v154));
	const char v224 = (char) (~v138);
	const char v225 = (char) (~v144);
	const char v226 = (char) (v67 | v50);
	const char v227 = (char) (v95 | v136);
	const char v228 = (char) (~v111 | v43);
	const char v229 = (char) (v105 & ~v152);
	const char v230 = (char) (v25);
	const char v231 = (char) (v124 | v139);
	const char v232 = (char) (v115 & ~v160);
	const char v233 = (char) (~(v131 | v70));
	const char v234 = (char) (v11 & v114);
	const char v235 = (char) (v26);
	const char v236 = (char) (~(v71 | v60));
	const char v237 = (char) (v84);
	const char v238 = (char) (v150 | v158);
	const char v239 = (char) (~(v39 & v120));
	const char v240 = (char) (~v148);
	const char v241 = (char) (v30 & v63);
	const char v242 = (char) (v121 | v101);
	const char v243 = (char) (~v48);
	const char v244 = (char) (~(v100 & v32));
	const char v245 = (char) (v27 | v28);
	const char v246 = (char) (~v122 | v15);
	const char v247 = (char) (~v22);
	const char v248 = (char) (~v5 | v39);
	const char v249 = (char) (~v84 | v117);
	const char v250 = (char) ((char) 0);
	const char v251 = (char) (~v107 | v66);
	const char v252 = (char) (~v34);
	const char v253 = (char) (v93 ^ v27);
	const char v254 = (char) (v116);
	const char v255 = (char) (v118);
	const char v256 = (char) (v165 | v157);
	const char v257 = (char) (v88);
	const char v258 = (char) (v56 & v30);
	const char v259 = (char) (~v131 | v74);
	const char v260 = (char) (~v44 | v1);
	const char v261 = (char) ((char) 0);
	const char v262 = (char) (v21);
	const char v263 = (char) (~(char) 0);
	const char v264 = (char) (v0 | v157);
	const char v265 = (char) (~v133);
	const char v266 = (char) (v144);
	const char v267 = (char) (~(v52 | v82));
	const char v268 = (char) (v9);
	const char v269 = (char) (~(char) 0);
	const char v270 = (char) (~v57 | v64);
	const char v271 = (char) (~v160);
	const char v272 = (char) (v72 & v59);
	const char v273 = (char) (~(v85 & v120));
	const char v274 = (char) (~v14);
	const char v275 = (char) (v60 ^ v118);
	const char v276 = (char) (~v3 | v65);
	const char v277 = (char) (~(v88 & v19));
	const char v278 = (char) (v31);
	const char v279 = (char) (~v45 | v47);
	const char v280 = (char) (v143);
	const char v281 = (char) (v102);
	const char v282 = (char) (~v50 | v61);
	const char v283 = (char) (~v7 | v99);
	const char v284 = (char) (v155);
	const char v285 = (char) (v9 | v112);
	const char v286 = (char) (v43);
	const char v287 = (char) (v85 & ~v99);
	const char v288 = (char) (~v97);
	const char v289 = (char) (v21 | v52);
	const char v290 = (char) (v125);
	const char v291 = (char) (~(char) 0);
	const char v292 = (char) (~(v95 ^ v78));
	const char v293 = (char) (~(v68 ^ v166));
	const char v294 = (char) (v106);
	const char v295 = (char) (v91 | v67);
	const char v296 = (char) (~v55);
	const char v297 = (char) (v40 | v138);
	const char v298 = (char) (v126 & v100);
	const char v299 = (char) (~v56);
	const char v300 = (char) (~(v17 & v25));
	const char v301 = (char) (~(v129 ^ v103));
	const char v302 = (char) (~(v82 ^ v8));
	const char v303 = (char) (v124 | v70);
	const char v304 = (char) (~v26);
	const char v305 = (char) (~(v86 | v71));
	const char v306 = (char) (~(v142 ^ v117));
	const char v307 = (char) (~(v114 | v164));
	const char v308 = (char) (v45);
	const char v309 = (char) (~(v73 & v6));
	const char v310 = (char) (~(v20 | v104));
	const char v311 = (char) (v140 & ~v112);
	const char v312 = (char) (v110 | v151);
	const char v313 = (char) (~(v109 ^ v83));
	const char v314 = (char) (~v87);
	const char v315 = (char) (~v96);
	const char v316 = (char) (v53 | v36);
	const char v317 = (char) (v40 & ~v53);
	const char v318 = (char) (v110 | v69);
	const char v319 = (char) (~(v46 | v62));
	const char v320 = (char) (~v41);
	const char v321 = (char) (~v23 | v78);
	const char v322 = (char) (v154 & v54);
	const char v323 = (char) (~v29);
	const char v324 = (char) (~v96);
	const char v325 = (char) (v29 & v106);
	const char v326 = (char) (~v16);
	const char v327 = (char) (v16 & ~v8);
	const char v328 = (char) (~(char) 0);
	const char v329 = (char) (v66 ^ v105);
	const char v330 = (char) (~v108 | v24);
	const char v331 = (char) (~v33);
	const char v332 = (char) (~(v139 & v24));
	const char v333 = (char) (~v141 | v147);
	const char v334 = (char) ((char) 0);
	const char v335 = (char) (v51);
	const char v336 = (char) (v224 ^ v306);
	const char v337 = (char) (v296 & v214);
	const char v338 = (char) (v265);
	const char v339 = (char) (~(v189 ^ v254));
	const char v340 = (char) (~(v220 & v172));
	const char v341 = (char) (v295 | v280);
	const char v342 = (char) (~v273);
	const char v343 = (char) (v195);
	const char v344 = (char) (~(v267 | v254));
	const char v345 = (char) (v192 | v183);
	const char v346 = (char) (~(v188 & v231));
	const char v347 = (char) (~v217);
	const char v348 = (char) (v269 & ~v260);
	const char v349 = (char) (~v275);
	const char v350 = (char) (~v318);
	const char v351 = (char) (v219 | v280);
	const char v352 = (char) (~v329);
	const char v353 = (char) (~(v245 ^ v200));
	const char v354 = (char) (~v217);
	const char v355 = (char) (v251 | v266);
	const char v356 = (char) (v221 & ~v246);
	const char v357 = (char) (~v185);
	const char v358 = (char) (v326 & v178);
	const char v359 = (char) (~(v316 & v240));
	const char v360 = (char) (v171 ^ v301);
	const char v361 = (char) (~(v240 ^ v259));
	const char v362 = (char) ((char) 0);
	const char v363 = (char) (v244);
	const char v364 = (char) (v233);
	const char v365 = (char) (~(v304 | v281));
	const char v366 = (char) (~v250);
	const char v367 = (char) (~(v174 & v320));
	const char v368 = (char) (~v286);
	const char v369 = (char) (~(v214 | v323));
	const char v370 = (char) (v314);
	const char v371 = (char) (v187);
	const char v372 = (char) (v226);
	const char v373 = (char) (v184 ^ v185);
	const char v374 = (char) (~v299);
	const char v375 = (char) (v212);
	const char v376 = (char) (v181);
	const char v377 = (char) (v172 ^ v178);
	const char v378 = (char) (v331 & ~v287);
	const char v379 = (char) (~(v311 | v226));
	const char v380 = (char) (v284 | v271);
	const char v381 = (char) (v168 | v310);
	const char v382 = (char) (v236 ^ v274);
	const char v383 = (char) (~v239 | v182);
	const char v384 = (char) (v325);
	const char v385 = (char) (~v229);
	const char v386 = (char) (v286 & v213);
	const char v387 = (char) (v253);
	const char v388 = (char) (v290);
	const char v389 = (char) (v207 ^ v187);
	const char v390 = (char) (~v308);
	const char v391 = (char) (v282 & ~v256);
	const char v392 = (char) (~(v276 ^ v204));
	const char v393 = (char) (v173 ^ v194);
	const char v394 = (char) (v211);
	const char v395 = (char) (v321 & ~v235);
	const char v396 = (char) (v283 & ~v213);
	const char v397 = (char) (~v266);
	const char v398 = (char) (~(v330 & v211));
	const char v399 = (char) (v265 & v225);
	const char v400 = (char) (~(v170 | v231));
	const char v401 = (char) (~v215);
	const char v402 = (char) (v197);
	const char v403 = (char) (~(v197 | v303));
	const char v404 = (char) (v182 ^ v255);
	const char v405 = (char) (v176 | v285);
	const char v406 = (char) (v232 & v321);
	const char v407 = (char) (v176);
	const char v408 = (char) (~(v294 & v293));
	const char v409 = (char) (~(v222 ^ v272));
	const char v410 = (char) (~v249);
	const char v411 = (char) (~(v325 & v196));
	const char v412 = (char) (~v216 | v180);
	const char v413 = (char) (v319);
	const char v414 = (char) (v335);
	const char v415 = (char) (v209 & ~v333);
	const char v416 = (char) (~v188 | v292);
	const char v417 = (char) (v302 & ~v189);
	const char v418 = (char) (v276);
	const char v419 = (char) (~v246);
	const char v420 = (char) (~v251 | v241);
	const char v421 = (char) (~v237 | v190);
	const char v422 = (char) (v219 & v332);
	const char v423 = (char) (v205 & v288);
	const char v424 = (char) (v335 & v277);
	const char v425 = (char) (~(v319 | v193));
	const char v426 = (char) (~v194);
	const char v427 = (char) (v210);
	const char v428 = (char) (v277);
	const char v429 = (char) (v328 & v326);
	const char v430 = (char) (~(v252 | v223));
	const char v431 = (char) (~v244);
	const char v432 = (char) (v206);
	const char v433 = (char) (v323 & ~v169);
	const char v434 = (char) (v302 & v202);
	const char v435 = (char) (v327 & ~v170);
	const char v436 = (char) (v207 ^ v270);
	const char v437 = (char) (~v184);
	const char v438 = (char) (v300 ^ v312);
	const char v439 = (char) (~v315);
	const char v440 = (char) (v203 & ~v215);
	const char v441 = (char) (~v186);
	const char v442 = (char) (v179);
	const char v443 = (char) (v222 | v230);
	const char v444 = (char) (~(v171 | v315));
	const char v445 = (char) (~v228);
	const char v446 = (char) (~v324);
	const char v447 = (char) (~(v304 & v300));
	const char v448 = (char) (v264 & ~v206);
	const char v449 = (char) (~v256);
	const char v450 = (char) (v199);
	const char v451 = (char) (~v238);
	const char v452 = (char) (v258 ^ v201);
	const char v453 = (char) (~v330);
	const char v454 = (char) (v201 ^ v247);
	const char v455 = (char) (v221);
	const char v456 = (char) (v202);
	const char v457 = (char) (~(v249 | v290));
	const char v458 = (char) (~v232);
	const char v459 = (char) (v203);
	const char v460 = (char) (v289 & ~v334);
	const char v461 = (char) (~v289);
	const char v462 = (char) (~v169 | v332);
	const char v463 = (char) (~v264 | v271);
	const char v464 = (char) (v261 & v267);
	const char v465 = (char) (v180 | v309);
	const char v466 = (char) (v303);
	const char v467 = (char) (v278);
	const char v468 = (char) (v317 ^ v208);
	const char v469 = (char) (~v292 | v177);
	const char v470 = (char) (v242);
	const char v471 = (char) (v318 & ~v199);
	const char v472 = (char) ((char) 0);
	const char v473 = (char) (v328 & v298);
	const char v474 = (char) (~v307);
	const char v475 = (char) (v297);
	const char v476 = (char) (~v262);
	const char v477 = (char) (~(v295 ^ v310));
	const char v478 = (char) (v210);
	const char v479 = (char) (~(v247 ^ v225));
	const char v480 = (char) (~v313);
	const char v481 = (char) (v235);
	const char v482 = (char) (v308 & ~v298);
	const char v483 = (char) (v212 & v285);
	const char v484 = (char) (v175);
	const char v485 = (char) (~v229);
	const char v486 = (char) (v268);
	const char v487 = (char) (v236);
	const char v488 = (char) (~v309 | v200);
	const char v489 = (char) (~v234);
	const char v490 = (char) (~v279 | v252);
	const char v491 = (char) (~v208);
	const char v492 = (char) (v196);
	const char v493 = (char) (~(v281 & v195));
	const char v494 = (char) (v306 & ~v268);
	const char v495 = (char) (v198 & v243);
	const char v496 = (char) (~(v262 & v305));
	const char v497 = (char) (~(char) 0);
	const char v498 = (char) (v297);
	const char v499 = (char) (~(v218 | v238));
	const char v500 = (char) (~v177 | v293);
	const char v501 = (char) (~(v243 | v316));
	const char v502 = (char) (~v228);
	const char v503 = (char) (~v314 | v230);
	const char v504 = (char) (v430 | v349);
	const char v505 = (char) (v467 | v347);
	const char v506 = (char) (v344 & ~v382);
	const char v507 = (char) (~v490);
	const char v508 = (char) (v359);
	const char v509 = (char) (v395 | v338);
	const char v510 = (char) (~(v452 & v381));
	const char v511 = (char) (~v445);
	const char v512 = (char) (~v378 | v388);
	const char v513 = (char) (~v441 | v337);
	const char v514 = (char) (v354 ^ v374);
	const char v515 = (char) (~v432);
	const char v516 = (char) (v406);
	const char v517 = (char) (~v487);
	const char v518 = (char) (~v395);
	const char v519 = (char) (~v459);
	const char v520 = (char) (v387 ^ v365);
	const char v521 = (char) (v465 & ~v468);
	const char v522 = (char) (v453 ^ v455);
	const char v523 = (char) (v501);
	const char v524 = (char) (v478);
	const char v525 = (char) (~v443 | v461);
	const char v526 = (char) (~v413);
	const char v527 = (char) (v340);
	const char v528 = (char) (~(v408 ^ v443));
	const char v529 = (char) (~v392 | v384);
	const char v530 = (char) (~v336);
	const char v531 = (char) (v448 | v418);
	const char v532 = (char) (~(v359 ^ v399));
	const char v533 = (char) (v346 & ~v388);
	const char v534 = (char) (~(v454 & v364));
	const char v535 = (char) (v383 & v343);
	const char v536 = (char) (~(v490 ^ v444));
	const char v537 = (char) (~v352 | v349);
	const char v538 = (char) (~(v369 ^ v424));
	const char v539 = (char) (v393 & v341);
	const char v540 = (char) (v460 & v503);
	const char v541 = (char) (~v375);
	const char v542 = (char) (v500 ^ v381);
	const char v543 = (char) (v368 | v451);
	const char v544 = (char) (~(v464 ^ v356));
	const char v545 = (char) (v494 ^ v456);
	const char v546 = (char) (~(v400 ^ v432));
	const char v547 = (char) (~v494 | v362);
	const char v548 = (char) (~v370);
	const char v549 = (char) (~v406 | v437);
	const char v550 = (char) (v360);
	const char v551 = (char) (~(v497 | v421));
	const char v552 = (char) (~(v431 & v357));
	const char v553 = (char) (~(v501 ^ v380));
	const char v554 = (char) (~v405);
	const char v555 = (char) (~v414 | v342);
	const char v556 = (char) (~v444);
	const char v557 = (char) (v345 & ~v386);
	const char v558 = (char) (v425);
	const char v559 = (char) (v399);
	const char v560 = (char) (v440);
	const char v561 = (char) (~(v502 | v416));
	const char v562 = (char) (v367);
	const char v563 = (char) (v471 | v492);
	const char v564 = (char) (~v353);
	const char v565 = (char) (v394);
	const char v566 = (char) (~(v496 ^ v336));
	const char v567 = (char) (~(v476 & v419));
	const char v568 = (char) (~v481);
	const char v569 = (char) (~v486);
	const char v570 = (char) (v339 & v403);
	const char v571 = (char) (v467);
	const char v572 = (char) (~v478);
	const char v573 = (char) (~(v436 | v487));
	const char v574 = (char) (~(v423 ^ v405));
	const char v575 = (char) (~(v390 ^ v438));
	const char v576 = (char) (~(v446 & v458));
	const char v577 = (char) (v445);
	const char v578 = (char) (~(v436 ^ v483));
	const char v579 = (char) (~v389 | v368);
	const char v580 = (char) (v338);
	const char v581 = (char) (v424 & ~v362);
	const char v582 = (char) (v371);
	const char v583 = (char) (~(v459 & v391));
	const char v584 = (char) (~v450 | v369);
	const char v585 = (char) (v439);
	const char v586 = (char) (~v402);
	const char v587 = (char) (~v475);
	const char v588 = (char) (v377 | v462);
	const char v589 = (char) (v419 & ~v393);
	const char v590 = (char) (v417);
	const char v591 = (char) (v493);
	const char v592 = (char) (v348 | v434);
	const char v593 = (char) (v387);
	const char v594 = (char) ((char) 0);
	const char v595 = (char) (v495 & ~v477);
	const char v596 = (char) (~v360 | v466);
	const char v597 = (char) (v499 & ~v382);
	const char v598 = (char) (~v502);
	const char v599 = (char) (v425);
	const char v600 = (char) (~v337);
	const char v601 = (char) (~v377);
	const char v602 = (char) (v482);
	const char v603 = (char) (v427);
	const char v604 = (char) (v482 ^ v363);
	const char v605 = (char) (~v461);
	const char v606 = (char) (~v428);
	const char v607 = (char) (v402 & ~v457);
	const char v608 = (char) (~v383 | v473);
	const char v609 = (char) (v398 & ~v470);
	const char v610 = (char) (v493 & ~v479);
	const char v611 = (char) (v375 & ~v429);
	const char v612 = (char) (~v450 | v434);
	const char v613 = (char) (v449 & ~v411);
	const char v614 = (char) (v418 & v358);
	const char v615 = (char) (v366 ^ v440);
	const char v616 = (char) ((char) 0);
	const char v617 = (char) (v410 & v441);
	const char v618 = (char) (~v345);
	const char v619 = (char) (v410);
	const char v620 = (char) (~v397 | v340);
	const char v621 = (char) (~v367);
	const char v622 = (char) (~v446 | v350);
	const char v623 = (char) (v363);
	const char v624 = (char) (v355 | v415);
	const char v625 = (char) (~v407);
	const char v626 = (char) (v489);
	const char v627 = (char) (~(v412 ^ v411));
	const char v628 = (char) (~v437 | v489);
	const char v629 = (char) (v468);
	const char v630 = (char) (~v486);
	const char v631 = (char) (~v455);
	const char v632 = (char) (~(v412 | v453));
	const char v633 = (char) (v347 ^ v379);
	const char v634 = (char) (~(v438 | v426));
	const char v635 = (char) (v488 & ~v352);
	const char v636 = (char) (~(v430 & v470));
	const char v637 = (char) (~v386);
	const char v638 = (char) (~v479 | v417);
	const char v639 = (char) (v427 & v496);
	const char v640 = (char) (~v344);
	const char v641 = (char) (~(v465 ^ v404));
	const char v642 = (char) (v392 & ~v485);
	const char v643 = (char) (~v474);
	const char v644 = (char) (v480);
	const char v645 = (char) (~v463);
	const char v646 = (char) (~v447);
	const char v647 = (char) (v484 | v358);
	const char v648 = (char) (~v485);
	const char v649 = (char) (v497 & ~v471);
	const char v650 = (char) (~(v354 | v365));
	const char v651 = (char) (v452 | v463);
	const char v652 = (char) (v376 ^ v433);
	const char v653 = (char) (v373);
	const char v654 = (char) (~(v380 ^ v374));
	const char v655 = (char) (~v384 | v407);
	const char v656 = (char) (~v339 | v435);
	const char v657 = (char) (~(v476 | v408));
	const char v658 = (char) (~v356);
	const char v659 = (char) (v364 & ~v457);
	const char v660 = (char) (~v466);
	const char v661 = (char) (v491);
	const char v662 = (char) (~v372 | v472);
	const char v663 = (char) (~(v495 ^ v385));
	const char v664 = (char) (~v371);
	const char v665 = (char) (~(v403 ^ v488));
	const char v666 = (char) (~v353);
	const char v667 = (char) (v491);
	const char v668 = (char) (~v351);
	const char v669 = (char) (~(v447 & v409));
	const char v670 = (char) (~(v429 & v357));
	const char v671 = (char) (v420 | v400);
	out[0] = (char) (~(v656 ^ v585));
	out[1] = (char) (~(v583 ^ v514));
	out[2] = (char) (v529 & ~v664);
	out[3] = (char) (v544 & ~v597);
	out[4] = (char) (v535);
	out[5] = (char) (v518 & ~v611);
	out[6] = (char) (v524);
	out[7] = (char) (~v635);
	out[8] = (char) (~v610);
	out[9] = (char) (~v517 | v538);
	out[10] = (char) (~v608 | v618);
	out[11] = (char) (v620);
	out[12] = (char) (~(v625 ^ v606));
	out[13] = (char) (v629);
	out[14] = (char) (~(v510 & v549));
	out[15] = (char) (~(char) 0);
	out[16] = (char) (~v509);
	out[17] = (char) (v668);
	out[18] = (char) (~v513);
	out[19] = (char) (~v515 | v617);
	out[20] = (char) (~(v557 ^ v589));
	out[21] = (char) (~v504);
	out[22] = (char) (v516);
	out[23] = (char) (v658 & ~v531);
	out[24] = (char) (~v539);
	out[25] = (char) (v654);
	out[26] = (char) (v636 & v550);
	out[27] = (char) (v541 ^ v556);
	out[28] = (char) (~v660 | v564);
	out[29] = (char) (v664 ^ v526);
	out[30] = (char) (v620 & ~v579);
	out[31] = (char) (~(v592 & v566));
	out[32] = (char) (~v517);
	out[33] = (char) (~(v586 ^ v518));
	out[34] = (char) (~v580);
	out[35] = (char) (~v652);
	out[36] = (char) (v668);
	out[37] = (char) (v544);
	out[38] = (char) (v535 & ~v507);
	out[39] = (char) (~v554);
	out[40] = (char) (v538 ^ v607);
	out[41] = (char) (v576 ^ v570);
	out[42] = (char) (~v533);
	out[43] = (char) (~v650);
	out[44] = (char) (v525 ^ v545);
	out[45] = (char) (~(v530 ^ v545));
	out[46] = (char) (v534);
	out[47] = (char) (v665);
	out[48] = (char) (v618);
	out[49] = (char) (v615 ^ v567);
	out[50] = (char) (~v663);
	out[51] = (char) (v577);
	out[52] = (char) (v593);
	out[53] = (char) (~(v647 & v566));
	out[54] = (char) (v526);
	out[55] = (char) (~(v594 ^ v559));
	out[56] = (char) (v648 & ~v551);
	out[57] = (char) (v644);
	out[58] = (char) (~(v511 & v633));
	out[59] = (char) (~v534);
	out[60] = (char) (~v629);
	out[61] = (char) (v569);
	out[62] = (char) (~(v660 ^ v542));
	out[63] = (char) (v641);
	out[64] = (char) (v552);
	out[65] = (char) (~(v561 ^ v655));
	out[66] = (char) (v601);
	out[67] = (char) (~v621 | v552);
	out[68] = (char) (~v662 | v613);
	out[69] = (char) (v519 & v563);
	out[70] = (char) (~(v533 ^ v558));
	out[71] = (char) (~v505);
	out[72] = (char) (~v626);
	out[73] = (char) (~v628 | v616);
	out[74] = (char) (~v560);
	out[75] = (char) (~v639);
	out[76] = (char) (v514 & v632);
	out[77] = (char) (~v547);
	out[78] = (char) (~(v635 ^ v536));
	out[79] = (char) (v592 & v601);
	out[80] = (char) (~v649);
	out[81] = (char) (v578);
	out[82] = (char) (v579);
	out[83] = (char) (~v508);
	out[84] = (char) (v568);
	out[85] = (char) (v528);
	out[86] = (char) (v612);
	out[87] = (char) (~(v666 ^ v641));
	out[88] = (char) (~(v600 ^ v520));
	out[89] = (char) (~v603);
	out[90] = (char) (~(v505 | v666));
	out[91] = (char) (v623);
	out[92] = (char) (v610 | v634);
	out[93] = (char) (~(v646 ^ v600));
	out[94] = (char) (~(v582 ^ v596));
	out[95] = (char) (v638 & ~v532);
	out[96] = (char) (v665 | v523);
	out[97] = (char) (v506 ^ v657);
	out[98] = (char) (v646 & ~v571);
	out[99] = (char) (v667);
	out[100] = (char) (v572 | v568);
	out[101] = (char) (v523 ^ v624);
	out[102] = (char) ((char) 0);
	out[103] = (char) (v543);
	out[104] = (char) (v509 & v623);
	out[105] = (char) (~(v537 ^ v614));
	out[106] = (char) (v569 & v582);
	out[107] = (char) (~v555);
	out[108] = (char) (v670 & v667);
	out[109] = (char) (v642);
	out[110] = (char) (v625);
	out[111] = (char) (v578);
	out[112] = (char) (~v670);
	out[113] = (char) (v574);
	out[114] = (char) (~(v669 ^ v652));
	out[115] = (char) (v511);
	out[116] = (char) (v581 ^ v507);
	out[117] = (char) (v589 ^ v648);
	out[118] = (char) (~v627);
	out[119] = (char) (v640);
	out[120] = (char) (v643);
	out[121] = (char) (v663 ^ v572);
	out[122] = (char) (v608);
	out[123] = (char) (~v661);
	out[124] = (char) (~(v602 | v573));
	out[125] = (char) (v555 & ~v556);
	out[126] = (char) (~v558);
	out[127] = (char) (~v562);
	out[128] = (char) (v513);
	out[129] = (char) (v671 ^ v570);
	out[130] = (char) (~v639 | v528);
	out[131] = (char) (v615 & ~v653);
	out[132] = (char) (~(v602 ^ v588));
	out[133] = (char) (~v536);
	out[134] = (char) (v621);
	out[135] = (char) (~v553);
	out[136] = (char) (~(v659 ^ v650));
	out[137] = (char) (~v512);
	out[138] = (char) (v598 & ~v548);
	out[139] = (char) (~(v604 ^ v595));
	out[140] = (char) (~(v561 ^ v548));
	out[141] = (char) (~(v613 ^ v565));
	out[142] = (char) (v585 & v546);
	out[143] = (char) (v614 & v591);
	out[144] = (char) (~(v622 ^ v632));
	out[145] = (char) (v631);
	out[146] = (char) (v658 & v537);
	out[147] = (char) (~v659 | v597);
	out[148] = (char) (v547);
	out[149] = (char) (v580);
	out[150] = (char) (v550 ^ v564);
	out[151] = (char) (~v590);
	out[152] = (char) (~v624);
	out[153] = (char) (~v644 | v645);
	out[154] = (char) (v540 ^ v591);
	out[155] = (char) (v520);
	out[156] = (char) (v669 ^ v563);
	out[157] = (char) (~v599);
	out[158] = (char) (~(v524 & v541));
	out[159] = (char) (~(v508 | v611));
	out[160] = (char) (~v540);
	out[161] = (char) (v640 & ~v604);
	out[162] = (char) (~v638);
	out[163] = (char) (~(v617 ^ v576));
	out[164] = (char) (~(v543 & v645));
	out[165] = (char) (v575);
	out[166] = (char) (v636 ^ v554);
	out[167] = (char) (~v596 | v510);
}

void apply_logic_gate_net (bool const *inp, int *out, size_t len) {
    char *inp_temp = (char*)malloc(84*sizeof(char));
    char *out_temp = (char*)malloc(168*sizeof(char));
    char *out_temp_o = (char*)malloc(6*sizeof(char));
    
    for(size_t i = 0; i < len; ++i) {
    
        // Converting the bool array into a bitpacked array
        for(size_t d = 0; d < 84; ++d) {
            char res = (char) 0;
            for(size_t b = 0; b < 8; ++b) {
                res <<= 1;
                res += !!(inp[i * 84 * 8 + (8 - b - 1) * 84 + d]);
            }
            inp_temp[d] = res;
        }
    
        // Applying the logic gate net
        logic_gate_net(inp_temp, out_temp);
        
        // GroupSum of the results via logic gate networks
        for(size_t c = 0; c < 3; ++c) {  // for each class
            // Initialize the output bits
            for(size_t d = 0; d < 6; ++d) {
                out_temp_o[d] = (char) 0;
            }
            
            // Apply the adder logic gate network
            for(size_t a = 0; a < 56; ++a) {
                char carry = out_temp[c * 56 + a];
                char out_temp_o_d;
                for(int d = 6 - 1; d >= 0; --d) {
                    out_temp_o_d  = out_temp_o[d];
                    out_temp_o[d] = carry ^ out_temp_o_d;
                    carry         = carry & out_temp_o_d;
                }
            }

			// out[c] = out_temp_o[0];
            
            // Unpack the result bits
            for(size_t b = 0; b < 8; ++b) {
                const char bit_mask = (char) 1 << b;
                int res = 0;
                for(size_t d = 0; d < 6; ++d) {
                    res <<= 1;
                    res += !!(out_temp_o[d] & bit_mask);
                }
				int index = (i * 8 + b) * 3 + c;
				printf("i: %d, b: %d, c: %d, res: %d\n", index, b, c, res);
                out[index] = res;
            }
        }
    }
    free(inp_temp);
    free(out_temp);
    free(out_temp_o);
}

int argmax(const int* arr, int size) {
    int max_index = 0;
    int max_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }

    return max_index;
}

int process(std::vector<double> mfccs, int numMFCCs) {
    bool modelInputs[84];
    size_t bitCounter=0;
    for(size_t i=0; i < numMFCCs; i++) {
        // rescale 0-127
		// pre-scaling to 7-bit range
        // double inVal = (*in(i) + 68.438636779785) / 189.473068237305 * 127.0;
		// double inVal = (mfccs[i] + 68.438636779785) / 189.473068237305 * 127.0;
		double inVal = (mfccs[i] + 1.51) / 4.58 * 127.0; // model3-mfcc
        size_t inInt = static_cast<size_t>(inVal);
        for(size_t bit = 0; bit < 7; bit++) {
            modelInputs[bitCounter] = inInt & 1;
            bitCounter++;
            inInt = inInt >> 1;
        }
    }

	int numModelOutputs = 3;
    int modelOutputs[numModelOutputs*8];

    apply_logic_gate_net(&modelInputs[0], &modelOutputs[0], 1);

	return argmax(modelOutputs, numModelOutputs);
}
