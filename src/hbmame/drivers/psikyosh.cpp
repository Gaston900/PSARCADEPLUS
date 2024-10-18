// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/psikyosh.cpp"

 /*****************
 Strikers 1945 III
********************/
ROM_START( s1945iiex )
	ROM_REGION( 0x200000, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "2_prog_l.u18-ex", 0x000002, 0x080000, CRC(56276eb7) SHA1(28530132058621382697c678426967d720741853) )
	ROM_LOAD32_WORD_SWAP( "1_prog_h.u17-ex", 0x000000, 0x080000, CRC(99658d0d) SHA1(f8b7a697819dc1e4993557d9e854aa53964eb4a3) )

	ROM_REGION( 0x2000000, "gfx1", 0 )
	ROM_LOAD32_WORD( "0l.u4",    0x0000000, 0x400000, CRC(bfacf98d) SHA1(19954f12881e6e95e808bd1f2c2f5a425786727f) )
	ROM_LOAD32_WORD( "0h.u13",   0x0000002, 0x400000, CRC(1266f67c) SHA1(cf93423a827aa92aa54afbbecf8509d2590edc9b) )
	ROM_LOAD32_WORD( "1l.u3",    0x0800000, 0x400000, CRC(2d3332c9) SHA1(f2e54100a48061bfd589e8765f59ca051176a38b) )
	ROM_LOAD32_WORD( "1h.u12",   0x0800002, 0x400000, CRC(27b32c3e) SHA1(17a80b3c919d8a282169c019ede8a22d2079c018) )
	ROM_LOAD32_WORD( "2l.u2",    0x1000000, 0x400000, CRC(91ba6d23) SHA1(fd016a90204b2de43bb709971f7cd891f839de1a) )
	ROM_LOAD32_WORD( "2h.u20",   0x1000002, 0x400000, CRC(fabf4334) SHA1(f8ec43e083b674700f532575f0d067bd49c5aaf7) )
	ROM_LOAD32_WORD( "3l.u1",    0x1800000, 0x400000, CRC(a6c3704e) SHA1(cb9881e4235cc8e4bcca4c6ccbd8d8d8634e3624) )
	ROM_LOAD32_WORD( "3h.u19",   0x1800002, 0x400000, CRC(4cd3ca70) SHA1(5b0a6ea4fe0e821cebe6e840596f648e24dded51) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u32", 0x000000, 0x400000, CRC(ba680ca7) SHA1(b645896e297aad426784aa656bff738e1b33c2a2) )

	ROM_REGION( 0x100, "eeprom", 0 )
	ROM_LOAD( "eeprom-s1945ii.bin", 0x0000, 0x0100, CRC(7ac38846) SHA1(c5f4b05a94211f3c96b8c472adbe634f2e77d753) )
ROM_END

/*************
 Daraku Tenshi
****************/
ROM_START( daraku01 )
	ROM_REGION( 0x200000, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "4_progs01.u18", 0x000002, 0x080000, CRC(a599fe9f) SHA1(12680fcab83b5cc3b53b19372096a97067e58fdc) )
	ROM_LOAD32_WORD_SWAP( "3_progs01.u17", 0x000000, 0x080000, CRC(2033dd8b) SHA1(b787b4f94b268f8585edc2ffa75dc2ccba5ad6f8) )
	ROM_LOAD16_WORD_SWAP( "prog.u16",     0x100000, 0x100000, CRC(3742e990) SHA1(dd4b8777e57245151b3d520ed1bdab207530420b) )

	ROM_REGION( 0x3400000, "gfx1", 0 )
	ROM_LOAD32_WORD( "0l.u4",  0x0000000, 0x400000, CRC(565d8427) SHA1(090ce9213c530d29e488cfb89bb39fd7169985d5) )
	ROM_LOAD32_WORD( "0h.u13", 0x0000002, 0x400000, CRC(9a602630) SHA1(ab176490b36aec7ce30d1cf20b57c02c926c59d3) )
	ROM_LOAD32_WORD( "1l.u3",  0x0800000, 0x400000, CRC(ac5ce8e1) SHA1(7df6a04ea2530cc669581474e8b8ee6f59caae1b) )
	ROM_LOAD32_WORD( "1h.u12", 0x0800002, 0x400000, CRC(b0a59f7b) SHA1(8704705aa0977f11da8bcdafae6e2531190878d0) )
	ROM_LOAD32_WORD( "2l.u2",  0x1000000, 0x400000, CRC(2daa03b2) SHA1(475badc60cbd26786242d685a3d7dbaf385862a8) )
	ROM_LOAD32_WORD( "2h.u20", 0x1000002, 0x400000, CRC(e98e185a) SHA1(124d5fcf6cfb1faf70d665b687564bf6589d17c4) )
	ROM_LOAD32_WORD( "3l.u1",  0x1800000, 0x400000, CRC(1d372aa1) SHA1(e5965a1d8919409a314dfd56482a848d6ab9f5ac) )
	ROM_LOAD32_WORD( "3h.u19", 0x1800002, 0x400000, CRC(597f3f15) SHA1(62bf74ed29732e6cc1979458745cdb53a8edddf3) )
	ROM_LOAD32_WORD( "4l.u10", 0x2000000, 0x400000, CRC(e3d58cd8) SHA1(9482d0b71f840d72b20029804cfc8dca207462de) )
	ROM_LOAD32_WORD( "4h.u31", 0x2000002, 0x400000, CRC(aebc9cd0) SHA1(c20a1f9851ace74e00f1a0746e0c9e751ccec336) )
	ROM_LOAD32_WORD( "5l.u9",  0x2800000, 0x400000, CRC(eab5a50b) SHA1(76ce96e89afc438bafb9f8caa86eb48fb7e4e154) )
	ROM_LOAD32_WORD( "5h.u30", 0x2800002, 0x400000, CRC(f157474f) SHA1(89509f0772a40829070cea708c21438ff61d1019) )
	ROM_LOAD32_WORD( "6l.u8",  0x3000000, 0x200000, CRC(9f008d1b) SHA1(9607e09bde430eefe126569a6e251114bc8f754b) )
	ROM_LOAD32_WORD( "6h.u37", 0x3000002, 0x200000, CRC(acd2d0e3) SHA1(dee96bdf3b8efde1298b73c5e7dd62abcdc101cf) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u32", 0x000000, 0x400000, CRC(ef2c781d) SHA1(1313f082f6dbe4da0efaf261226085eb7325667f) )

	ROM_REGION( 0x100, "eeprom", 0 )
	ROM_LOAD( "eeprom-daraku.bin", 0x0000, 0x0100, CRC(a9715297) SHA1(fcd32b936e0d05bad4ba4969ddec24aae7768cea) )
ROM_END

 /*********
 Gunbird 2
************/
ROM_START( gunbird2s01 )
	ROM_REGION( 0x180000, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "2_prog_ls01.u16", 0x000002, 0x080000, CRC(E4d9966a) SHA1(0164ccf6a2786e2a15c6c185dcbe03db97dbe775) )
	ROM_LOAD32_WORD_SWAP( "1_prog_hs01.u17", 0x000000, 0x080000, CRC(1cca1f60) SHA1(9647988f4871648eefd54d4afdb5d921f496ce1c) )
	ROM_LOAD16_WORD_SWAP( "3_pdata.u1",   0x100000, 0x080000, CRC(a5b697e6) SHA1(947f124fa585c2cf77c6571af7559bd652897b89) )

	ROM_REGION( 0x3800000, "gfx1", 0 )
	ROM_LOAD32_WORD( "0l.u3",  0x0000000, 0x800000, CRC(5c826bc8) SHA1(74fb6b242b4c5fe5365cfcc3029ed6da4cf3a621) )
	ROM_LOAD32_WORD( "0h.u10", 0x0000002, 0x800000, CRC(3df0cb6c) SHA1(271d276fa0f63d84e458223316a9517865fc2255) )
	ROM_LOAD32_WORD( "1l.u4",  0x1000000, 0x800000, CRC(1558358d) SHA1(e3b9c3da4e9b29ffa9568b57d14fe2b600aead68) )
	ROM_LOAD32_WORD( "1h.u11", 0x1000002, 0x800000, CRC(4ee0103b) SHA1(29bbe0162dda39919fcd188ea4a6b7b5f20366ff) )
	ROM_LOAD32_WORD( "2l.u5",  0x2000000, 0x800000, CRC(e1c7a7b8) SHA1(b5f6e5d53e21928197773df7dde0e7c83f4082af) )
	ROM_LOAD32_WORD( "2h.u12", 0x2000002, 0x800000, CRC(bc8a41df) SHA1(90460b11eea778f17cf8be67430e2ab149680686) )
	ROM_LOAD32_WORD( "3l.u6",  0x3000000, 0x400000, CRC(0229d37f) SHA1(f9d98d1d2dda2d552b2a46c76b4c7fc84b1aa4c6) )
	ROM_LOAD32_WORD( "3h.u13", 0x3000002, 0x400000, CRC(f41bbf2b) SHA1(b705274e392541e2f513a4ae4bae543c03be0913) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u9", 0x000000, 0x400000, CRC(f19796ab) SHA1(b978f0550ebd675e8ce9d9edcfcc3f6214e49e8b) )

	ROM_REGION( 0x100, "eeprom", 0 )
	ROM_LOAD( "eeprom-gunbird2.bin", 0x0000, 0x0100, CRC(7ac38846) SHA1(c5f4b05a94211f3c96b8c472adbe634f2e77d753) )
ROM_END

 /*****************
 Strikers 1945 III
********************/
ROM_START( s1945iii01 )
	ROM_REGION( 0x180000, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "2_progls01.u16", 0x000002, 0x080000, CRC(465f06d4) SHA1(2254ca868d526e04840e53016a55684a02bd483f) )
	ROM_LOAD32_WORD_SWAP( "1_progh.u17", 0x000000, 0x080000, CRC(1b8a5a18) SHA1(718a176bd48e16f964fcb07c568b5227cfc0515f) )
	ROM_LOAD16_WORD_SWAP( "3_data.u1",   0x100000, 0x080000, CRC(8ff5f7d3) SHA1(420a3d7f2d5ab6a56789d36b418431f12f5f73f5) )

	ROM_REGION( 0x3800000, "gfx1", 0 )
	ROM_LOAD32_WORD( "0l.u3",  0x0000000, 0x800000, CRC(70a0d52c) SHA1(c9d9534da59123b577dc22020273b94ccdeeb67d) )
	ROM_LOAD32_WORD( "0h.u10", 0x0000002, 0x800000, CRC(4dcd22b4) SHA1(2df7a7d08df17d2a62d574fccc8ba40aaae21a13) )
	ROM_LOAD32_WORD( "1l.u4",  0x1000000, 0x800000, CRC(de1042ff) SHA1(468f6dfd5c1f2084c573b6851e314ff2826dc350) )
	ROM_LOAD32_WORD( "1h.u11", 0x1000002, 0x800000, CRC(b51a4430) SHA1(b51117591b0e351e922f9a6a7930e8b50237e54e) )
	ROM_LOAD32_WORD( "2l.u5",  0x2000000, 0x800000, CRC(23b02dca) SHA1(0249dceca02b312301a917d98fac481b6a0a9122) )
	ROM_LOAD32_WORD( "2h.u12", 0x2000002, 0x800000, CRC(9933ab04) SHA1(710e6b20e111c1898666b4466554d039309883cc) )
	ROM_LOAD32_WORD( "3l.u6",  0x3000000, 0x400000, CRC(f693438c) SHA1(d70e25a3f56aae6575c696d9b7b6d7a9d04f0104) )
	ROM_LOAD32_WORD( "3h.u13", 0x3000002, 0x400000, CRC(2d0c334f) SHA1(74d94abb34484c7b79dbb989645f53124e53e3b7) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u9", 0x000000, 0x400000, CRC(c5374beb) SHA1(d13e12cbd249246d953c45bb3bfa576a0ec75595) )

	ROM_REGION( 0x100, "eeprom", 0 )
	ROM_LOAD( "eeprom-s1945iii.bin", 0x0000, 0x0100, CRC(b39f3604) SHA1(d7c66210598096fcafb20adac2f0b293755f4926) )
ROM_END

ROM_START( s1945iii02 )
	ROM_REGION( 0x929E90, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "2_progls02.u16", 0x000002, 0x454F48, CRC(0e45ff7e) SHA1(a76c4bb434168feaf1f72565f72dda8022edd10c) )
	ROM_LOAD32_WORD_SWAP( "1_proghs02.u17", 0x000000, 0x454F48, CRC(1c12a67c) SHA1(ebf2a5e8e9cdbc2b91403fe8373ffa44833d73ec) )
	ROM_LOAD16_WORD_SWAP( "3_data.u1",   0x100000, 0x080000, CRC(8ff5f7d3) SHA1(420a3d7f2d5ab6a56789d36b418431f12f5f73f5) )

	ROM_REGION( 0x3800000, "gfx1", 0 )
	ROM_LOAD32_WORD( "0l.u3",  0x0000000, 0x800000, CRC(70a0d52c) SHA1(c9d9534da59123b577dc22020273b94ccdeeb67d) )
	ROM_LOAD32_WORD( "0h.u10", 0x0000002, 0x800000, CRC(4dcd22b4) SHA1(2df7a7d08df17d2a62d574fccc8ba40aaae21a13) )
	ROM_LOAD32_WORD( "1l.u4",  0x1000000, 0x800000, CRC(de1042ff) SHA1(468f6dfd5c1f2084c573b6851e314ff2826dc350) )
	ROM_LOAD32_WORD( "1h.u11", 0x1000002, 0x800000, CRC(b51a4430) SHA1(b51117591b0e351e922f9a6a7930e8b50237e54e) )
	ROM_LOAD32_WORD( "2l.u5",  0x2000000, 0x800000, CRC(23b02dca) SHA1(0249dceca02b312301a917d98fac481b6a0a9122) )
	ROM_LOAD32_WORD( "2h.u12", 0x2000002, 0x800000, CRC(9933ab04) SHA1(710e6b20e111c1898666b4466554d039309883cc) )
	ROM_LOAD32_WORD( "3l.u6",  0x3000000, 0x400000, CRC(f693438c) SHA1(d70e25a3f56aae6575c696d9b7b6d7a9d04f0104) )
	ROM_LOAD32_WORD( "3h.u13", 0x3000002, 0x400000, CRC(2d0c334f) SHA1(74d94abb34484c7b79dbb989645f53124e53e3b7) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u9", 0x000000, 0x400000, CRC(c5374beb) SHA1(d13e12cbd249246d953c45bb3bfa576a0ec75595) )

	ROM_REGION( 0x100, "eeprom", 0 )
	ROM_LOAD( "eeprom-s1945iii.bin", 0x0000, 0x0100, CRC(b39f3604) SHA1(d7c66210598096fcafb20adac2f0b293755f4926) )
ROM_END

ROM_START( s1945iii03 ) // s1945sr3
	ROM_REGION( 0x180000, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "2_progls03.u16", 0x000002, 0x080000, CRC(16b4e78e) SHA1(ac16e3d7b959e7d28f1afc6eb6c590afa96fa379) )
	ROM_LOAD32_WORD_SWAP( "1_proghs03.u17", 0x000000, 0x080000, CRC(6607b00e) SHA1(958d00880deb3d57c607402b8a87adaaa720914c) )
	ROM_LOAD16_WORD_SWAP( "3_data.u1",   0x100000, 0x080000, CRC(8ff5f7d3) SHA1(420a3d7f2d5ab6a56789d36b418431f12f5f73f5) )

	ROM_REGION( 0x3800000, "gfx1", 0 )
	ROM_LOAD32_WORD( "0l.u3",  0x0000000, 0x800000, CRC(70a0d52c) SHA1(c9d9534da59123b577dc22020273b94ccdeeb67d) )
	ROM_LOAD32_WORD( "0h.u10", 0x0000002, 0x800000, CRC(4dcd22b4) SHA1(2df7a7d08df17d2a62d574fccc8ba40aaae21a13) )
	ROM_LOAD32_WORD( "1l.u4",  0x1000000, 0x800000, CRC(de1042ff) SHA1(468f6dfd5c1f2084c573b6851e314ff2826dc350) )
	ROM_LOAD32_WORD( "1h.u11", 0x1000002, 0x800000, CRC(b51a4430) SHA1(b51117591b0e351e922f9a6a7930e8b50237e54e) )
	ROM_LOAD32_WORD( "2l.u5",  0x2000000, 0x800000, CRC(23b02dca) SHA1(0249dceca02b312301a917d98fac481b6a0a9122) )
	ROM_LOAD32_WORD( "2h.u12", 0x2000002, 0x800000, CRC(9933ab04) SHA1(710e6b20e111c1898666b4466554d039309883cc) )
	ROM_LOAD32_WORD( "3l.u6",  0x3000000, 0x400000, CRC(f693438c) SHA1(d70e25a3f56aae6575c696d9b7b6d7a9d04f0104) )
	ROM_LOAD32_WORD( "3h.u13", 0x3000002, 0x400000, CRC(2d0c334f) SHA1(74d94abb34484c7b79dbb989645f53124e53e3b7) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u9", 0x000000, 0x400000, CRC(c5374beb) SHA1(d13e12cbd249246d953c45bb3bfa576a0ec75595) )

	ROM_REGION( 0x100, "eeprom", 0 )
	ROM_LOAD( "eeprom-s1945iii.bin", 0x0000, 0x0100, CRC(b39f3604) SHA1(d7c66210598096fcafb20adac2f0b293755f4926) )
ROM_END

 /**********************************
 Sol Divide - The Sword Of Darkness
*************************************/

ROM_START( soldivid01 )
	ROM_REGION( 0x200000, "maincpu", 0)
	ROM_LOAD32_WORD_SWAP( "2-prog_ls01.u18", 0x000002, 0x080000, CRC(E25b51a6) SHA1(04a6846cd7dcdcbf7943335cd76d138466c3af6d) )
	ROM_LOAD32_WORD_SWAP( "1-prog_hs01.u17", 0x000000, 0x080000, CRC(16656358) SHA1(Ef2506e3d50fd0c9d92c9975662ad2d3bf57e944) )

	ROM_REGION( 0x3800000, "gfx1", 0 )
	ROM_LOAD32_WORD_SWAP( "4lhc01.u10", 0x2000000, 0x400000, CRC(218e97a0) SHA1(D9e836725303060fbac5cdc5646aaf817c379c8d) )
	ROM_LOAD32_WORD_SWAP( "4hhc01.u31", 0x2000002, 0x400000, CRC(7e92228a) SHA1(Ae99c0b6083e47527803b9170832f622fa300c56) )
	ROM_LOAD32_WORD_SWAP( "5l.u9",  0x2800000, 0x400000, CRC(c59c6858) SHA1(bd580b57e432ef42295060c5a84c8129d9b995f7) )
	ROM_LOAD32_WORD_SWAP( "5h.u30", 0x2800002, 0x400000, CRC(73bc66d0) SHA1(7988ce81ff43235a3b30ddd8fd9419530a07b6ba) )
	ROM_LOAD32_WORD_SWAP( "6l.u8",  0x3000000, 0x400000, CRC(f01b816e) SHA1(2a0d86c1c106eef539028aa9ebe49d13216a6b9c) )
	ROM_LOAD32_WORD_SWAP( "6h.u37", 0x3000002, 0x400000, CRC(fdd57361) SHA1(f58d91acde1f4e6d4f0e8dcd1b23aa5092d89916) )

	ROM_REGION( 0x400000, "ymf", 0 )
	ROM_LOAD( "sound.u32", 0x000000, 0x400000, CRC(e98f8d45) SHA1(7791c0f31d08f37c6ec65e7cecf8ef54ca73b1fd) )
ROM_END

/*     YEAR  NAME        PARENT     MACHINE      INPUT     CLASS           INIT      MONITOR  COMPANY   FULLNAME                                FLAGS */
// Daraku Tenshi
GAME( 1998, daraku01,    daraku,    psikyo3v1,   daraku,   psikyosh_state, init_ps3, ROT0,   "Yumeji", "Daraku Tenshi (Enable Hidden Characters)", MACHINE_SUPPORTS_SAVE )
// Gunbird 2
GAME( 2009, gunbird2s01, gunbird2,  psikyo5,     gunbird2, psikyosh_state, init_ps5, ROT270, "YZB & Pipi899", "Gunbird 2 (Ex Super Version, 2009-08-04)", MACHINE_SUPPORTS_SAVE )
// Strikers 1945 II
GAME( 2009, s1945iiex,   s1945ii,   psikyo3v1,   s1945ii,  psikyosh_state, init_ps3, ROT270, "Pipi899", "Strikers 1945 II (EX Super Version, 2009-07-29)", MACHINE_SUPPORTS_SAVE )
// Strikers 1945 III
GAME( 2009, s1945iii01,  s1945iii,  psikyo5,     s1945iii, psikyosh_state, init_ps5, ROT270, "Pipi899", "Strikers 1945 III (Ex Super Version, 2009-07-X3)", MACHINE_SUPPORTS_SAVE )
GAME( 2014, s1945iii02,  s1945iii,  psikyo5,     s1945iii, psikyosh_state, init_ps5, ROT270, "hack", "Strikers 1945 III (Version Enhanced, 2014-04-07)", MACHINE_SUPPORTS_SAVE )
GAME( 2009, s1945iii03,  s1945iii,  psikyo5,     s1945iii, psikyosh_state, init_ps5, ROT270, "Pipi899", "Strikers 1945 III (Secret Fighter, 2009-07-23)", MACHINE_SUPPORTS_SAVE )
// Sol Divide - The Sword Of Darkness
GAME( 2007, soldivid01,  soldivid,  psikyo3v1,   soldivid, psikyosh_state, init_ps3, ROT0,   "Shyma.X", "Sol Divide - The Sword Of Darkness (French v1.0, 2007-08-18)", MACHINE_SUPPORTS_SAVE )

