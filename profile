version: 1
creator: callgrind-3.5.0
pid: 6541
cmd:  ./main
part: 1


desc: I1 cache: 
desc: D1 cache: 
desc: L2 cache: 

desc: Timerange: Basic block 0 - 920203353
desc: Trigger: Program termination

positions: line
events: Ir
summary: 8504242839


ob=(5) /lib/libm-2.11.so
fl=(5) ???
fn=(288) 0x0001d5f0
0 5
cfn=(280) 0x000034f7
calls=1 0 
0 2
0 8

fn=(280)
0 6

fn=(986) 0x00003440
0 5
cfn=(280)
calls=1 0 
0 2
0 10
cob=(4) /lib/libc-2.11.so
cfi=(4) ???
cfn=(842) __cxa_finalize
calls=1 0 
0 84
cob=(1) /lib/ld-2.11.so
cfi=(1) ???
cfn=(180) _dl_runtime_resolve
calls=1 0 
0 1107
0 14

fn=(278) 0x000034c0
0 4
cfn=(280)
calls=1 0 
0 2
0 9

ob=(6) /lib/librt-2.11.so
fl=(6) ???
fn=(300) 0x00001910
0 4
cfn=(302) 0x00001947
calls=1 0 
0 2
0 9

fn=(942) 0x00001890
0 5
cfn=(302)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1107
0 14

fn=(310) 0x00005680
0 5
cfn=(302)
calls=1 0 
0 2
0 8

fn=(302)
0 6

ob=(3) /lib/libpthread-2.11.so
fl=(3) ???
fn=(238) 0x000043b0
0 4
cfn=(168) 0x00004320
calls=1 0 
0 2
0 9

fn=(246) 0x000100f0
0 5
cfn=(168)
calls=1 0 
0 2
0 8

fn=(486) __pthread_mutex_unlock_usercnt
0 18
cfn=(168)
calls=2 0 
0 4
0 68

fn=(482) pthread_mutex_lock
0 16
cfn=(168)
calls=2 0 
0 4
0 62

fn=(966) 0x00004330
0 5
cfn=(168)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1107
0 14

fn=(168)
0 22

fn=(166) __pthread_initialize_minimal
0 12
cfn=(168)
calls=1 0 
0 2
0 4
cob=(1)
cfi=(1)
cfn=(170) _dl_sysinfo_int80
calls=1 0 
0 2
0 21
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 8
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 18
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 69
cfn=(172) __libc_sigaction
calls=1 0 
0 93
0 8
cfn=(172)
calls=1 0 
0 93
0 7
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 4
cob=(1)
cfi=(1)
cfn=(184) _dl_get_tls_static_info
calls=1 0 
0 14
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1515
0 15
cob=(4)
cfi=(4)
cfn=(190) getrlimit@@GLIBC_2.2
calls=1 0 
0 20
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1170
0 9
cob=(4)
cfi=(4)
cfn=(198) sysconf
calls=1 0 
0 51
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1021
0 11
cob=(4)
cfi=(4)
cfn=(208) __libc_dl_error_tsd
calls=1 0 
0 10
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1193
0 3
cob=(1)
cfi=(1)
cfn=(62) _dl_initial_error_catch_tsd
calls=1 0 
0 9
0 24
cob=(4)
cfi=(4)
cfn=(214) __libc_pthread_init
calls=1 0 
0 458
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1193
0 2
cob=(4)
cfi=(4)
cfn=(222) uname
calls=1 0 
0 10
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 940
0 7
cob=(4)
cfi=(4)
cfn=(228) strstr
calls=1 0 
0 366
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 965
0 10

fn=(666) _pthread_cleanup_push_defer
0 1100

fn=(674) _pthread_cleanup_pop_restore
0 850

fn=(484) pthread_mutex_unlock
0 12
cfn=(486)
calls=2 0 
0 90

fn=(172)
0 16
cfn=(168)
calls=2 0 
0 4
0 118
cob=(1)
cfi=(1)
cfn=(170)
calls=2 0 
0 4
0 44

ob=(7) /usr/lib/libv4lconvert.so.0
fl=(7) ???
fn=(324) 0x00001477
0 6

fn=(322) 0x00001440
0 4
cfn=(324)
calls=1 0 
0 2
0 9

fn=(920) 0x000013c0
0 5
cfn=(324)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1107
0 14

fn=(332) 0x00014080
0 5
cfn=(324)
calls=1 0 
0 2
0 8

ob=(8) /usr/lib/libv4l2.so.0
fl=(8) ???
fn=(354) 0x00004e80
0 5
cfn=(346) 0x00000e17
calls=1 0 
0 2
0 8

fn=(346)
0 6

fn=(898) 0x00000d60
0 5
cfn=(346)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1107
0 14

fn=(344) 0x00000de0
0 4
cfn=(346)
calls=1 0 
0 2
0 9

ob=(9) /usr/lib/libv4l1.so.0
fl=(9) ???
fn=(368) 0x00000a37
0 6

fn=(366) 0x00000a00
0 4
cfn=(368)
calls=1 0 
0 2
0 9

fn=(876) 0x00000980
0 5
cfn=(368)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1107
0 14

fn=(376) 0x00002a80
0 5
cfn=(368)
calls=1 0 
0 2
0 8

ob=(12) /home/heraclio/diseño de algoritmos/uno/main
fl=(12) ???
fn=(460) 0x0804a6a0
0 11

fn=(718) update_satur
0 36781

fn=(726) interchange
0 400
cob=(4)
cfi=(4)
cfn=(474) malloc
calls=50 0 
0 5304
0 500
cfn=(728) list_length
calls=50 0 
0 2360
0 150
cob=(4)
cfi=(4)
cfn=(474)
calls=50 0 
0 5304
0 250
cob=(4)
cfi=(4)
cfn=(474)
calls=50 0 
0 5408
0 350
cfn=(716) initialize
calls=50 0 
0 2220
0 10588
cob=(4)
cfi=(4)
cfn=(474)
calls=50 0 
0 5408
0 4355
cfn=(730) twoOnN
calls=50 0 
0 8421
0 510
cob=(4)
cfi=(4)
cfn=(474)
calls=180 0 
0 18824
0 900
cob=(4)
cfi=(4)
cfn=(474)
calls=180 0 
0 19968
0 1080
cfn=(716)
calls=180 0 
0 21960
0 19129
cob=(4)
cfi=(4)
cfn=(474)
calls=208 0 
0 21944
0 3952
cob=(4)
cfi=(4)
cfn=(474)
calls=208 0 
0 40560
0 1248
cfn=(716)
calls=208 0 
0 25376
0 3536
cfn=(732) dfs
calls=208 0 
0 172762
0 7191
cfn=(734) get_nxt_neighbour
calls=799 0 
0 47193
0 5176
cob=(4)
cfi=(4)
cfn=(548) free
calls=180 0 
0 16560
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 925
0 1260
cfn=(740) check_subgraph
calls=180 0 
0 23722
0 577
cfn=(744) interch
calls=7 0 
0 4453
0 115
cfn=(744)
calls=6 0 
0 3453
0 39
cfn=(742) del_array_list
calls=13 0 
0 5252
0 39
cob=(4)
cfi=(4)
cfn=(548)
calls=13 0 
0 1196
0 514
cfn=(742)
calls=167 0 
0 36460
0 501
cob=(4)
cfi=(4)
cfn=(548)
calls=167 0 
0 15364
0 1169
cfn=(730)
calls=167 0 
0 20944
0 918
cob=(4)
cfi=(4)
cfn=(548)
calls=50 0 
0 4600
0 150
cob=(4)
cfi=(4)
cfn=(548)
calls=50 0 
0 4600
0 150
cob=(4)
cfi=(4)
cfn=(548)
calls=50 0 
0 4600
0 150
cob=(4)
cfi=(4)
cfn=(548)
calls=50 0 
0 4600
0 100

fn=(730)
0 3509
cob=(4)
cfi=(4)
cfn=(474)
calls=180 0 
0 18824
0 7032

fn=(746) update_saturation
0 4946

fn=(748) main_col_init
0 4053931415

fn=(446) __libc_csu_init
0 6
cfn=(448) 0x0804a69a
calls=1 0 
0 2
0 3
cob=(2) ???
cfi=(2) ???
cfn=(450) 0x080484b0
calls=1 0 
0 34
0 12

fn=(454) 0x08048670
0 8

fn=(712) compare
0 802

fn=(714) get_max_degree
0 14798

fn=(720) repeated
0 13850

fn=(728)
0 2360

fn=(742)
0 1372
cfn=(743) del_array_list'2
calls=28 0 
0 5600
0 720
cob=(4)
cfi=(4)
cfn=(548)
calls=180 0 
0 16560
0 540
cob=(4)
cfi=(4)
cfn=(548)
calls=180 0 
0 16560
0 360

fn=(743)
0 308
cob=(4)
cfi=(4)
cfn=(548)
calls=28 0 
0 2576
0 84
cob=(4)
cfi=(4)
cfn=(548)
calls=28 0 
0 2576
0 56

fn=(788) move_vertex
0 661

fn=(430) 0x080485e0
0 13
cob=(4)
cfi=(4)
cfn=(438) (below main)
calls=1 0 
0 8503989487
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1164

fn=(468) main
0 16
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 75444
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 957
0 7
cob=(4)
cfi=(4)
cfn=(504) regcomp
calls=1 0 
0 28227
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 988
0 2
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 353
0 7
cob=(4)
cfi=(4)
cfn=(504)
calls=1 0 
0 16545
0 2
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 104
0 42
cob=(4)
cfi=(4)
cfn=(636) regexec@@GLIBC_2.3.4
calls=5 0 
0 6373
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1146
0 24
cob=(4)
cfi=(4)
cfn=(652) sscanf
calls=1 0 
0 1991
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1051
0 36
cob=(4)
cfi=(4)
cfn=(604) getline
calls=5 0 
0 2042
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 980
0 392
cob=(4)
cfi=(4)
cfn=(474)
calls=14 0 
0 2870
0 3670
cob=(4)
cfi=(4)
cfn=(636)
calls=89 0 
0 94881
0 684
cob=(4)
cfi=(4)
cfn=(652)
calls=46 0 
0 74684
0 544
cob=(4)
cfi=(4)
cfn=(474)
calls=42 0 
0 8669
0 882
cob=(4)
cfi=(4)
cfn=(474)
calls=42 0 
0 8809
0 1092
cob=(4)
cfi=(4)
cfn=(604)
calls=42 0 
0 8914
0 336
cob=(4)
cfi=(4)
cfn=(604)
calls=48 0 
0 11630
0 274
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 198
0 8
cfn=(676) degree
calls=1 0 
0 865
0 4
cob=(4)
cfi=(4)
cfn=(682) gettimeofday
calls=1 0 
0 11
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1052
0 17
cob=(4)
cfi=(4)
cfn=(688) signal
calls=1 0 
0 247
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 964
0 2
cob=(4)
cfi=(4)
cfn=(698) alarm
calls=1 0 
0 10
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 949
0 10
cfn=(700) dsatur
calls=1 0 
0 55304
0 77
cfn=(748)
calls=14 0 
0 35616
0 154
cfn=(700)
calls=14 0 
0 757774
0 186
cob=(4)
cfi=(4)
cfn=(548)
calls=12 0 
0 1104
0 61
cob=(4)
cfi=(4)
cfn=(754) puts
calls=1 0 
0 2712
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 932
0 5
cob=(4)
cfi=(4)
cfn=(778) printf
calls=1 0 
0 1159
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1012
0 5
cob=(4)
cfi=(4)
cfn=(778)
calls=1 0 
0 1141
0 8
cfn=(786) get_vertices
calls=1 0 
0 1080
0 4
cob=(4)
cfi=(4)
cfn=(548)
calls=1 0 
0 92
0 11
cfn=(790) implicit_enum
calls=1 0 
0 8502771802

fn=(724) makes_clique
0 56435

fn=(786)
0 7
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 104
0 246
cfn=(788)
calls=4 0 
0 661
0 62

fn=(790)
0 63
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 104
0 11
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 104
0 7
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 208
0 7967766
cfn=(748)
calls=1593513 0 
0 4053895799
0 7967560
cfn=(716)
calls=1593512 0 
0 194408464
0 20715656
cfn=(792) color_fixed
calls=1593512 0 
0 1587137952
0 11154584
cfn=(796) check_perm
calls=1593512 0 
0 283982587
0 117642836
cfn=(722) leastp_color
calls=11286230 0 
0 524236340
0 375632614
cfn=(794) update_color_around
calls=9692718 0 
0 1101865582
0 67454088
cfn=(798) next_perm
calls=1593512 0 
0 143928939
0 4780538

fn=(794)
0 2475472926

fn=(796)
0 283982587

fn=(722)
0 524248954

fn=(740)
0 23722

fn=(798)
0 143928939

fn=(700)
0 2685
cob=(4)
cfi=(4)
cfn=(474)
calls=15 0 
0 1664
0 1808
cob=(4)
cfi=(4)
cfn=(706) qsort
calls=1 0 
0 3682
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 941
0 7
cfn=(714)
calls=1 0 
0 17
0 226
cob=(4)
cfi=(4)
cfn=(474)
calls=14 0 
0 1664
0 14
cob=(4)
cfi=(4)
cfn=(474)
calls=1 0 
0 208
0 90
cfn=(716)
calls=15 0 
0 1830
0 255
cfn=(718)
calls=15 0 
0 4380
0 33035
cfn=(720)
calls=195 0 
0 13850
0 1755
cfn=(714)
calls=195 0 
0 14781
0 1560
cfn=(722)
calls=195 0 
0 9664
0 2721
cfn=(726)
calls=50 0 
0 614738
0 350
cfn=(722)
calls=50 0 
0 2950
0 2735
cfn=(724)
calls=60 0 
0 16646
0 1716
cfn=(724)
calls=126 0 
0 39789
0 764
cfn=(718)
calls=28 0 
0 3850
0 2672
cfn=(718)
calls=167 0 
0 28551
0 1148
cob=(4)
cfi=(4)
cfn=(548)
calls=1 0 
0 92
0 3
cob=(4)
cfi=(4)
cfn=(548)
calls=1 0 
0 92
0 145

fn=(744)
0 1956
cfn=(746)
calls=13 0 
0 4719
0 29
cfn=(746)
calls=1 0 
0 227
0 975

fn=(792)
0 180066856
cfn=(794)
calls=6374048 0 
0 1373607344
0 33463752

fn=(448)
0 2

fn=(716)
0 194459850

fn=(732)
0 41404
cfn=(733) dfs'2
calls=236 0 
0 123066
0 8292

fn=(733)
0 100922
cfn=(733)
calls=330 0 
0 105894
0 22144

fn=(734)
0 47193

fn=(676)
0 865

fn=(800) alarmHandler
0 5
cob=(4)
cfi=(4)
cfn=(754)
calls=1 0 
0 676
0 2
cob=(4)
cfi=(4)
cfn=(808) exit
calls=1 0 
0 13630
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 941

fn=(818) 0x08048610
0 18

ob=(2)
fl=(2)
fn=(340) 0x04193b20
0 10
cob=(8)
cfi=(8)
cfn=(344)
calls=1 0 
0 15
0 1
cob=(8)
cfi=(8)
cfn=(354)
calls=1 0 
0 15
0 4

fn=(816) 0x0804a6cc
0 7
cob=(12)
cfi=(12)
cfn=(818)
calls=1 0 
0 18
0 4

fn=(296) 0x04224474
0 10
cob=(6)
cfi=(6)
cfn=(300)
calls=1 0 
0 15
0 1
cob=(6)
cfi=(6)
cfn=(310)
calls=1 0 
0 15
0 4

fn=(984) 0x04249628
0 7
cob=(5)
cfi=(5)
cfn=(986)
calls=1 0 
0 1222
0 4

fn=(274) 0x0422f334
0 10
cob=(5)
cfi=(5)
cfn=(278)
calls=1 0 
0 15
0 1
cob=(5)
cfi=(5)
cfn=(288)
calls=1 0 
0 15
0 4

fn=(450)
0 10
cob=(12)
cfi=(12)
cfn=(454)
calls=1 0 
0 8
0 1
cob=(12)
cfi=(12)
cfn=(460)
calls=1 0 
0 11
0 4

fn=(384) 0x04021444
0 10
cob=(10) /usr/lib/libv4l/v4l1compat.so
cfi=(10) ???
cfn=(388) 0x000005a0
calls=1 0 
0 15
0 1
cob=(10)
cfi=(10)
cfn=(398) 0x00000840
calls=1 0 
0 15
0 4

fn=(940) 0x04228750
0 7
cob=(6)
cfi=(6)
cfn=(942)
calls=1 0 
0 1222
0 4

fn=(164) 0x041a1e80
0 3
cob=(3)
cfi=(3)
cfn=(166)
calls=1 0 
0 9365
0 1
cob=(3)
cfi=(3)
cfn=(238)
calls=1 0 
0 15
0 1
cob=(3)
cfi=(3)
cfn=(246)
calls=1 0 
0 15
0 2

fn=(918) 0x041cb0b8
0 7
cob=(7)
cfi=(7)
cfn=(920)
calls=1 0 
0 1222
0 4

fn=(406) 0x0401f26c
0 10
cob=(11) /usr/lib/valgrind/vgpreload_core-x86-linux.so
cfi=(11) ???
cfn=(410) 0x00000360
calls=1 0 
0 15
0 1
cob=(11)
cfi=(11)
cfn=(420) 0x00000410
calls=1 0 
0 15
0 4

fn=(896) 0x04197eb8
0 7
cob=(8)
cfi=(8)
cfn=(898)
calls=1 0 
0 1222
0 4

fn=(962) 0x041ae1a0
0 4
cob=(3)
cfi=(3)
cfn=(168)
calls=1 0 
0 2
0 2
cob=(3)
cfi=(3)
cfn=(966)
calls=1 0 
0 1222
0 3

fn=(362) 0x0418e7dc
0 10
cob=(9)
cfi=(9)
cfn=(366)
calls=1 0 
0 15
0 1
cob=(9)
cfi=(9)
cfn=(376)
calls=1 0 
0 15
0 4

fn=(874) 0x04190ab8
0 7
cob=(9)
cfi=(9)
cfn=(876)
calls=1 0 
0 1222
0 4

fn=(318) 0x041b80a8
0 10
cob=(7)
cfi=(7)
cfn=(322)
calls=1 0 
0 15

ob=(10)
fl=(10)
fn=(398)
0 5
cfn=(390) 0x000005d7
calls=1 0 
0 2
0 8

fn=(390)
0 6

fn=(854) 0x00000520
0 5
cfn=(390)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 1107
0 14

fn=(388)
0 4
cfn=(390)
calls=1 0 
0 2
0 5

ob=(2)
fl=(2)
fn=(318)
0 1
cob=(7)
cfi=(7)
cfn=(332)
calls=1 0 
0 15
0 4

fn=(826) 0x0401f448
0 7
cob=(11)
cfi=(11)
cfn=(828) 0x000002e0
calls=1 0 
0 955
0 4

fn=(852) 0x04021878
0 7
cob=(10)
cfi=(10)
cfn=(854)
calls=1 0 
0 1222
0 4

ob=(10)
fl=(10)
fn=(388)
0 4

ob=(4)
fl=(4)
fn=(198)
0 7
cfn=(192) 0x000169bf
calls=1 0 
0 2
0 27
cfn=(200) getpagesize
calls=1 0 
0 13
0 2

fn=(202) 0x00107d06
0 6

fn=(260) __libc_global_ctors
0 5
cfn=(192)
calls=1 0 
0 2
0 7
cfn=(262) _IO_check_libio
calls=1 0 
0 17
0 2
cfn=(264) init_cacheinfo
calls=1 0 
0 7337
0 10

fn=(272) intel_02_known_compare
0 2242

fn=(442) __internal_atexit
0 6
cfn=(192)
calls=1 0 
0 2
0 5
cfn=(444) __new_exitfn
calls=1 0 
0 54
0 18

fn=(480) _dl_addr
0 6
cfn=(192)
calls=1 0 
0 2
0 9
cob=(3)
cfi=(3)
cfn=(482)
calls=1 0 
0 41
0 73619
cob=(3)
cfi=(3)
cfn=(484)
calls=1 0 
0 51
0 12

fn=(532) parse_branch
0 40
cfn=(534) parse_expression
calls=2 0 
0 1185
0 138
cfn=(534)
calls=6 0 
0 2192
0 96
cfn=(538) create_tree
calls=6 0 
0 444
0 30

fn=(533) parse_branch'2
0 40
cfn=(535) parse_expression'2
calls=2 0 
0 446
0 50

fn=(542) preorder
0 66
cfn=(564) link_nfa_nodes
calls=2 0 
0 54
cfn=(562) calc_next
calls=2 0 
0 38
cfn=(544) optimize_subexps
calls=2 0 
0 28
0 198
cfn=(564)
calls=24 0 
0 1922
cfn=(562)
calls=24 0 
0 456
cfn=(544)
calls=18 0 
0 262
0 1328

fn=(572) duplicate_node_closure
0 134
cfn=(574) duplicate_node
calls=2 0 
0 4227
0 16
cfn=(580) re_node_set_insert
calls=2 0 
0 54
0 28

fn=(594) re_string_destruct
0 480
cfn=(192)
calls=96 0 
0 192
0 576
cfn=(548)
calls=96 0 
0 2016
0 288
cfn=(548)
calls=96 0 
0 2016
0 672

fn=(620) mmap
0 32
cob=(1)
cfi=(1)
cfn=(170)
calls=2 0 
0 4
0 14

fn=(638) re_search_internal
0 1410
cfn=(192)
calls=94 0 
0 188
0 14288
cfn=(524) re_string_realloc_buffers
calls=94 0 
0 2256
0 9024
cfn=(548)
calls=47 0 
0 987
0 94
cfn=(548)
calls=47 0 
0 987
0 564
cfn=(594)
calls=94 0 
0 6110
0 1833
cfn=(640) re_string_reconstruct
calls=47 0 
0 1692
0 1363
cfn=(642) re_string_context_at
calls=47 0 
0 658
0 12690
cfn=(644) build_trtable
calls=6 0 
0 35871
0 1234

fn=(654) vsscanf
0 235
cfn=(192)
calls=47 0 
0 94
0 470
cfn=(656) _IO_no_init
calls=47 0 
0 2632
0 376
cfn=(660) _IO_str_init_static_internal
calls=47 0 
0 5784
0 329
cfn=(664) _IO_vfscanf
calls=47 0 
0 65627
0 235

fn=(762) _IO_default_xsputn
0 9
cfn=(192)
calls=1 0 
0 2
0 478
cfn=(758) _IO_file_overflow@@GLIBC_2.1
calls=33 0 
0 1320
0 206

fn=(214)
0 6
cfn=(192)
calls=1 0 
0 2
0 8
cfn=(216) __register_atfork
calls=1 0 
0 61
0 381

fn=(230) index
0 33

fn=(234) memchr
0 6646

fn=(258) rindex
0 63

fn=(522) memset
0 2286

fn=(524)
0 864
cfn=(192)
calls=96 0 
0 192
0 1248

fn=(530) parse_reg_exp
0 40
cfn=(532)
calls=2 0 
0 4125
0 44

fn=(531) parse_reg_exp'2
0 40
cfn=(533)
calls=2 0 
0 536
0 44

fn=(554) lower_subexps
0 444
cfn=(556) lower_subexp
calls=2 0 
0 724
0 10

fn=(566) re_node_set_init_1
0 60
cfn=(192)
calls=12 0 
0 24
0 108
cfn=(474)
calls=12 0 
0 1735
0 132

fn=(576) _int_realloc
0 150
cfn=(192)
calls=15 0 
0 30
0 599
cfn=(490) _int_malloc
calls=12 0 
0 1362
0 369
cfn=(550) _int_free
calls=2 0 
0 104
0 30
cfn=(550)
calls=10 0 
0 641
0 73
cfn=(578) memcpy
calls=5 0 
0 241
0 10

fn=(588) register_state
0 140
cfn=(192)
calls=14 0 
0 28
0 98
cfn=(570) re_node_set_alloc
calls=14 0 
0 3126
0 258
cfn=(590) re_node_set_insert_last
calls=10 0 
0 240
0 373
cfn=(514) realloc
calls=11 0 
0 2621
0 77

fn=(618) __fxstat64@@GLIBC_2.2
0 12
cfn=(192)
calls=2 0 
0 4
0 8
cob=(1)
cfi=(1)
cfn=(170)
calls=2 0 
0 4
0 12

fn=(646) __libc_alloca_cutoff
0 156

fn=(668) _IO_sputbackc
0 3990

fn=(690) sigaction
0 7
cfn=(192)
calls=1 0 
0 2
0 14
cfn=(692) __libc_sigaction
calls=1 0 
0 138

fn=(706)
0 13
cfn=(708) qsort_r
calls=1 0 
0 3667
0 2

fn=(760) _IO_do_write@@GLIBC_2.1
0 76
cfn=(766) new_do_write
calls=4 0 
0 416
0 16

fn=(782) strchrnul
0 270

fn=(810) __run_exit_handlers
0 8
cfn=(192)
calls=1 0 
0 2
0 41
cfn=(1008) _IO_cleanup
calls=1 0 
0 403
0 6
cfn=(1018) _Exit
calls=1 0 
0 3
0 9
cob=(1)
cfi=(1)
cfn=(812) _dl_fini
calls=1 0 
0 13143
0 1

fn=(842)
0 48
cfn=(192)
calls=8 0 
0 16
0 344
cfn=(844) __unregister_atfork
calls=8 0 
0 264

fn=(844)
0 48
cfn=(192)
calls=8 0 
0 16
0 200

fn=(208)
0 1
cfn=(202)
calls=1 0 
0 2
0 7

fn=(268) intel_check_word
0 96
cfn=(192)
calls=12 0 
0 24
0 600
cfn=(270) bsearch
calls=30 0 
0 5852
0 417

fn=(490)
0 10045
cfn=(192)
calls=1435 0 
0 2870
0 62962
cfn=(492) malloc_consolidate
calls=7 0 
0 1256
0 37253
cfn=(492)
calls=1 0 
0 671
0 8266
cfn=(494) __default_morecore
calls=1 0 
0 101
0 43
cfn=(494)
calls=1 0 
0 38
0 21

fn=(492)
0 48
cfn=(192)
calls=8 0 
0 16
0 1863

fn=(520) calloc
0 198
cfn=(192)
calls=22 0 
0 44
0 770
cfn=(490)
calls=22 0 
0 4506
0 880
cfn=(522)
calls=22 0 
0 2232
0 22

fn=(582) re_node_set_merge
0 96
cfn=(192)
calls=12 0 
0 24
0 272
cfn=(514)
calls=4 0 
0 778
0 152
cfn=(578)
calls=12 0 
0 328
0 24

fn=(626) _IO_file_read
0 26
cfn=(628) read
calls=2 0 
0 28

fn=(710) msort_with_tmp
0 7
cfn=(192)
calls=1 0 
0 2
0 19
cfn=(711) msort_with_tmp'2
calls=1 0 
0 1496
0 4
cfn=(711)
calls=1 0 
0 1347
0 25
cob=(12)
cfi=(12)
cfn=(712)
calls=1 0 
0 17
0 84
cob=(12)
cfi=(12)
cfn=(712)
calls=12 0 
0 264
0 167
cfn=(578)
calls=1 0 
0 54
0 17
cfn=(578)
calls=1 0 
0 28
0 52

fn=(711)
0 182
cfn=(192)
calls=26 0 
0 52
0 298
cfn=(711)
calls=12 0 
0 1472
0 48
cfn=(711)
calls=12 0 
0 2165
0 300
cob=(12)
cfi=(12)
cfn=(712)
calls=12 0 
0 240
0 91
cob=(12)
cfi=(12)
cfn=(712)
calls=13 0 
0 281
0 353
cfn=(578)
calls=5 0 
0 148
0 77
cfn=(578)
calls=7 0 
0 228
0 233
cfn=(578)
calls=7 0 
0 196
0 116

fn=(784) _itoa_word
0 18
cfn=(192)
calls=2 0 
0 4
0 54

fn=(190)
0 6
cfn=(192)
calls=1 0 
0 2
0 4
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 6

fn=(192)
0 13230

fn=(254) _init
0 6
cfn=(192)
calls=1 0 
0 2
0 16
cfn=(256) __init_misc
calls=1 0 
0 96
0 1
cfn=(260)
calls=1 0 
0 7380
0 12

fn=(496) sbrk
0 10
cfn=(192)
calls=2 0 
0 4
0 30
cfn=(498) brk
calls=1 0 
0 24
0 20
cfn=(498)
calls=1 0 
0 24
0 5

fn=(538)
0 200
cfn=(536) create_token_tree
calls=20 0 
0 1212
0 40

fn=(574)
0 30
cfn=(560) re_dfa_add_node
calls=2 0 
0 4115
0 82

fn=(612) _IO_doallocbuf
0 14
cfn=(192)
calls=2 0 
0 4
0 30
cfn=(614) _IO_file_doallocate
calls=2 0 
0 289
0 4

fn=(636)
0 1410
cfn=(508) strlen
calls=94 0 
0 4741
0 1880
cfn=(638)
calls=94 0 
0 91249
0 1974

fn=(682)
0 5
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 4

fn=(768) _IO_file_write@@GLIBC_2.1
0 88
cfn=(770) write
calls=4 0 
0 56
0 68

fn=(808)
0 4
cfn=(192)
calls=1 0 
0 2
0 8
cfn=(810)
calls=1 0 
0 13616

fn=(1010) _IO_flush_all_lockp
0 6
cfn=(192)
calls=1 0 
0 2
0 89
cob=(3)
cfi=(3)
cfn=(674)
calls=1 0 
0 17
0 25
cob=(3)
cfi=(3)
cfn=(666)
calls=1 0 
0 22
0 1

fn=(1012) _IO_file_setbuf@@GLIBC_2.1
0 6
cfn=(192)
calls=1 0 
0 2
0 8
cfn=(1014) _IO_default_setbuf
calls=1 0 
0 96
0 15

fn=(232) critical_factorization
0 108

fn=(256)
0 7
cfn=(192)
calls=1 0 
0 2
0 10
cfn=(258)
calls=1 0 
0 63
0 14

fn=(466) _setjmp
0 16

fn=(474)
0 7005
cfn=(192)
calls=1401 0 
0 2802
0 29407
cfn=(490)
calls=1400 0 
0 116570
0 32212
cfn=(476) malloc_hook_ini
calls=1 0 
0 75416
0 2

fn=(475) malloc'2
0 5
cfn=(192)
calls=1 0 
0 2
0 21
cfn=(490)
calls=1 0 
0 1088
0 23

fn=(608) __underflow
0 14
cfn=(192)
calls=2 0 
0 4
0 50
cfn=(610) _IO_file_underflow@@GLIBC_2.1
calls=2 0 
0 382
0 27

fn=(622) _IO_setb
0 350
cfn=(192)
calls=50 0 
0 100
0 852

fn=(628)
0 4
cfn=(630) __read_nocancel
calls=2 0 
0 24

fn=(756) _IO_file_xsputn@@GLIBC_2.1
0 72
cfn=(192)
calls=8 0 
0 16
0 104
cfn=(758)
calls=3 0 
0 574
0 54
cfn=(762)
calls=1 0 
0 2015
0 866
cfn=(802) mempcpy
calls=1 0 
0 25
0 19

fn=(758)
0 342
cfn=(192)
calls=38 0 
0 76
0 1107
cfn=(760)
calls=2 0 
0 248
0 24
cfn=(760)
calls=3 0 
0 260
0 6
cfn=(612)
calls=1 0 
0 176
0 7

fn=(1014)
0 9
cfn=(192)
calls=1 0 
0 2
0 5
cfn=(1016) _IO_file_sync@@GLIBC_2.1
calls=1 0 
0 25
0 26
cfn=(622)
calls=1 0 
0 28
0 1

fn=(200)
0 2
cfn=(202)
calls=2 0 
0 4
0 20

fn=(478) ptmalloc_init
0 12
cfn=(192)
calls=2 0 
0 4
0 23
cfn=(200)
calls=1 0 
0 13
0 23
cfn=(488) __linkin_atfork
calls=1 0 
0 20
0 433
cfn=(480)
calls=1 0 
0 73740
0 9

fn=(508)
0 4984

fn=(510) re_compile_internal
0 26
cfn=(192)
calls=2 0 
0 4
0 124
cfn=(474)
calls=2 0 
0 373
0 44
cfn=(520)
calls=2 0 
0 490
0 196
cfn=(524)
calls=2 0 
0 48
0 44
cfn=(526) fetch_token
calls=2 0 
0 197
0 18
cfn=(530)
calls=2 0 
0 4209
0 26
cfn=(538)
calls=2 0 
0 140
0 16
cfn=(538)
calls=2 0 
0 148
0 24
cfn=(474)
calls=2 0 
0 328
0 10
cfn=(474)
calls=2 0 
0 565
0 12
cfn=(474)
calls=2 0 
0 373
0 12
cfn=(474)
calls=2 0 
0 373
0 34
cfn=(474)
calls=2 0 
0 383
0 34
cfn=(542)
calls=2 0 
0 734
0 33
cfn=(552) postorder
calls=2 0 
0 1568
0 12
cfn=(552)
calls=2 0 
0 2032
0 12
cfn=(542)
calls=2 0 
0 1068
0 8
cfn=(542)
calls=2 0 
0 2550
0 224
cfn=(568) calc_eclosure_iter
calls=10 0 
0 10145
0 148
cfn=(584) re_node_set_init_copy
calls=2 0 
0 478
0 26
cfn=(586) re_acquire_state_context
calls=2 0 
0 3540
0 20
cfn=(548)
calls=2 0 
0 184
0 8
cfn=(592) free_workarea_compile
calls=2 0 
0 545
0 4
cfn=(594)
calls=2 0 
0 130
0 46
cfn=(586)
calls=2 0 
0 3709
0 14
cfn=(586)
calls=2 0 
0 3646
0 16
cfn=(586)
calls=2 0 
0 3411
0 30
cfn=(548)
calls=1 0 
0 92
0 2
cfn=(548)
calls=1 0 
0 92
0 14
cfn=(514)
calls=2 0 
0 499
0 18

fn=(544)
0 290

fn=(560)
0 160
cfn=(192)
calls=16 0 
0 32
0 842
cfn=(514)
calls=2 0 
0 810
0 16
cfn=(514)
calls=2 0 
0 629
0 10
cfn=(514)
calls=2 0 
0 751
0 12
cfn=(514)
calls=2 0 
0 809
0 10
cfn=(514)
calls=2 0 
0 876
0 42

fn=(570)
0 180
cfn=(192)
calls=36 0 
0 72
0 288
cfn=(474)
calls=36 0 
0 6721
0 324

fn=(664)
0 282
cfn=(192)
calls=47 0 
0 94
0 18954
cfn=(668)
calls=95 0 
0 1995
0 3974
cob=(3)
cfi=(3)
cfn=(674)
calls=47 0 
0 799
0 5228
cfn=(668)
calls=94 0 
0 1974
0 11120
cfn=(670) __strtol_internal
calls=94 0 
0 14964
0 1034
cob=(3)
cfi=(3)
cfn=(666)
calls=47 0 
0 1034
0 4146
cfn=(668)
calls=1 0 
0 21
0 8

fn=(772) __write_nocancel
0 24
cob=(1)
cfi=(1)
cfn=(170)
calls=4 0 
0 8
0 16

fn=(1008)
0 6
cfn=(192)
calls=1 0 
0 2
0 4
cfn=(1010)
calls=1 0 
0 162
0 57
cfn=(1012)
calls=1 0 
0 127
0 45

fn=(1016)
0 7
cfn=(192)
calls=1 0 
0 2
0 16

fn=(222)
0 4
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 4

fn=(494)
0 12
cfn=(496)
calls=2 0 
0 117
0 10

fn=(528) peek_token
0 140
cfn=(192)
calls=14 0 
0 28
0 801

fn=(556)
0 36
cfn=(538)
calls=2 0 
0 148
0 16
cfn=(538)
calls=2 0 
0 148
0 70
cfn=(538)
calls=2 0 
0 140
0 14
cfn=(538)
calls=2 0 
0 140
0 12

fn=(584)
0 240
cfn=(192)
calls=24 0 
0 48
0 216
cfn=(474)
calls=24 0 
0 4721
0 240
cfn=(578)
calls=24 0 
0 670
0 168

fn=(598) re_compile_fastmap_iter
0 80
cfn=(192)
calls=8 0 
0 16
0 392

fn=(624) _IO_switch_to_get_mode
0 50

fn=(672) ____strtol_l_internal
0 752
cfn=(192)
calls=94 0 
0 188
0 11674

fn=(692)
0 8
cfn=(192)
calls=1 0 
0 2
0 59
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 67

fn=(698)
0 4
cob=(1)
cfi=(1)
cfn=(170)
calls=1 0 
0 2
0 4

fn=(708)
0 9
cfn=(192)
calls=1 0 
0 2
0 35
cfn=(710)
calls=1 0 
0 3583
0 3
cfn=(548)
calls=1 0 
0 21
0 14

fn=(1018)
0 3

fn=(264)
0 9
cfn=(192)
calls=1 0 
0 2
0 20
cfn=(266) handle_intel
calls=1 0 
0 2588
0 4
cfn=(266)
calls=1 0 
0 2608
0 92
cfn=(266)
calls=1 0 
0 2011
0 3

fn=(266)
0 21
cfn=(192)
calls=3 0 
0 6
0 78
cfn=(268)
calls=3 0 
0 2790
0 24
cfn=(268)
calls=3 0 
0 2199
0 21
cfn=(268)
calls=3 0 
0 66
0 21
cfn=(268)
calls=3 0 
0 1934
0 47

fn=(270)
0 2746
cfn=(272)
calls=188 0 
0 2242
0 864

fn=(504)
0 16
cfn=(192)
calls=2 0 
0 4
0 30
cfn=(474)
calls=2 0 
0 521
0 54
cfn=(508)
calls=2 0 
0 64
0 10
cfn=(510)
calls=2 0 
0 43309
0 14
cfn=(596) re_compile_fastmap
calls=2 0 
0 736
0 14

fn=(514)
0 162
cfn=(192)
calls=27 0 
0 54
0 1003
cfn=(576)
calls=15 0 
0 3609
0 455
cfn=(474)
calls=11 0 
0 2210
0 6
cfn=(516) realloc_hook_ini
calls=1 0 
0 272
0 2

fn=(515) realloc'2
0 6
cfn=(192)
calls=1 0 
0 2
0 22
cfn=(474)
calls=1 0 
0 198

fn=(548)
0 7788
cfn=(192)
calls=1298 0 
0 2596
0 25549
cfn=(550)
calls=1011 0 
0 52681
0 10534

fn=(550)
0 10230
cfn=(192)
calls=1023 0 
0 2046
0 41150

fn=(564)
0 260
cfn=(192)
calls=26 0 
0 52
0 462
cfn=(566)
calls=6 0 
0 1202

fn=(590)
0 90
cfn=(192)
calls=10 0 
0 20
0 130

fn=(606) getdelim
0 760
cfn=(192)
calls=95 0 
0 190
0 3325
cfn=(474)
calls=1 0 
0 342
0 1231
cfn=(234)
calls=94 0 
0 6620
0 2444
cfn=(578)
calls=94 0 
0 2440
0 2844
cfn=(608)
calls=2 0 
0 477
0 13

fn=(652)
0 376
cfn=(192)
calls=47 0 
0 94
0 235
cfn=(654)
calls=47 0 
0 75782
0 188

fn=(754)
0 12
cfn=(192)
calls=2 0 
0 4
0 10
cfn=(508)
calls=2 0 
0 179
0 66
cfn=(756)
calls=2 0 
0 2621
0 90
cfn=(764) __overflow
calls=2 0 
0 400
0 6

fn=(216)
0 9
cfn=(192)
calls=1 0 
0 2
0 50

fn=(228)
0 8
cfn=(192)
calls=1 0 
0 2
0 62
cfn=(230)
calls=1 0 
0 33
0 26
cfn=(232)
calls=1 0 
0 108
0 38
cfn=(234)
calls=1 0 
0 26
0 63

fn=(438)
0 6
cfn=(192)
calls=1 0 
0 2
0 15
cfn=(440) __cxa_atexit
calls=1 0 
0 106
0 14
cob=(12)
cfi=(12)
cfn=(446)
calls=1 0 
0 57
0 9
cfn=(466)
calls=1 0 
0 16
0 16
cob=(12)
cfi=(12)
cfn=(468)
calls=1 0 
0 8503989244
0 2

fn=(526)
0 112
cfn=(528)
calls=14 0 
0 969
0 98

fn=(534)
0 88
cfn=(192)
calls=8 0 
0 16
0 218
cfn=(536)
calls=2 0 
0 889
0 14
cfn=(526)
calls=2 0 
0 174
0 30
cfn=(536)
calls=4 0 
0 232
0 54
cfn=(526)
calls=6 0 
0 444
0 140
cfn=(540) parse_sub_exp
calls=2 0 
0 1060
0 18

fn=(535)
0 22
cfn=(192)
calls=2 0 
0 4
0 56
cfn=(526)
calls=2 0 
0 184
0 52
cfn=(536)
calls=2 0 
0 116
0 12

fn=(536)
0 280
cfn=(192)
calls=28 0 
0 56
0 1336
cfn=(474)
calls=2 0 
0 755
0 22

fn=(540)
0 34
cfn=(526)
calls=2 0 
0 180
0 30
cfn=(538)
calls=2 0 
0 144
0 36
cfn=(531)
calls=2 0 
0 620
0 16

fn=(562)
0 494

fn=(592)
0 16
cfn=(192)
calls=2 0 
0 4
0 16
cfn=(548)
calls=2 0 
0 258
0 18
cfn=(548)
calls=2 0 
0 219
0 14

fn=(610)
0 16
cfn=(192)
calls=2 0 
0 4
0 28
cfn=(624)
calls=2 0 
0 50
0 30
cfn=(626)
calls=2 0 
0 54
0 33
cfn=(612)
calls=1 0 
0 165
0 2

fn=(644)
0 36
cfn=(192)
calls=6 0 
0 12
0 36
cfn=(646)
calls=6 0 
0 78
0 812
cfn=(566)
calls=6 0 
0 857
0 208
cfn=(570)
calls=6 0 
0 1191
0 360
cfn=(582)
calls=6 0 
0 1260
0 72
cfn=(586)
calls=6 0 
0 7016
0 486
cfn=(520)
calls=6 0 
0 4305
0 3870
cfn=(548)
calls=6 0 
0 552
0 42
cfn=(548)
calls=6 0 
0 552
0 76
cfn=(522)
calls=2 0 
0 54
0 13906
cfn=(646)
calls=6 0 
0 78
0 12

fn=(660)
0 282
cfn=(192)
calls=47 0 
0 94
0 470
cfn=(662) rawmemchr
calls=47 0 
0 2588
0 282
cfn=(622)
calls=47 0 
0 1222
0 846

fn=(764)
0 14
cfn=(192)
calls=2 0 
0 4
0 20
cfn=(758)
calls=2 0 
0 352
0 10

fn=(262)
0 5
cfn=(192)
calls=1 0 
0 2
0 10

fn=(440)
0 4
cfn=(192)
calls=1 0 
0 2
0 11
cfn=(442)
calls=1 0 
0 85
0 4

fn=(476)
0 5
cfn=(192)
calls=1 0 
0 2
0 6
cfn=(478)
calls=1 0 
0 74258
0 6
cfn=(475)
calls=1 0 
0 1139

fn=(498)
0 10
cfn=(192)
calls=2 0 
0 4
0 10
cob=(1)
cfi=(1)
cfn=(170)
calls=2 0 
0 4
0 20

fn=(516)
0 5
cfn=(192)
calls=1 0 
0 2
0 10
cfn=(478)
calls=1 0 
0 19
0 8
cfn=(515)
calls=1 0 
0 228

fn=(552)
0 426
cfn=(558) calc_first
calls=26 0 
0 1532
cfn=(554)
calls=20 0 
0 1178
0 464

fn=(558)
0 304
cfn=(560)
calls=14 0 
0 884
0 344

fn=(568)
0 100
cfn=(192)
calls=10 0 
0 20
0 120
cfn=(570)
calls=10 0 
0 1938
0 246
cfn=(582)
calls=6 0 
0 414
0 132
cfn=(580)
calls=6 0 
0 372
0 278
cfn=(569) calc_eclosure_iter'2
calls=6 0 
0 1894
0 36
cfn=(572)
calls=2 0 
0 4459
0 24
cfn=(580)
calls=4 0 
0 108
0 4

fn=(569)
0 60
cfn=(192)
calls=6 0 
0 12
0 72
cfn=(570)
calls=6 0 
0 1330
0 252
cfn=(580)
calls=6 0 
0 162
0 6

fn=(586)
0 140
cfn=(192)
calls=14 0 
0 28
0 578
cfn=(520)
calls=1 0 
0 278
0 12
cfn=(520)
calls=3 0 
0 801
0 30
cfn=(520)
calls=10 0 
0 2778
0 112
cfn=(584)
calls=14 0 
0 3556
0 1768
cfn=(588)
calls=14 0 
0 6961
0 162
cfn=(474)
calls=8 0 
0 1769
0 48
cfn=(584)
calls=8 0 
0 2269
0 32

fn=(596)
0 184
cfn=(598)
calls=2 0 
0 64
0 14
cfn=(598)
calls=2 0 
0 64
0 18
cfn=(598)
calls=2 0 
0 180
0 16
cfn=(598)
calls=2 0 
0 180
0 16

fn=(604)
0 570
cfn=(192)
calls=95 0 
0 190
0 760
cfn=(606)
calls=95 0 
0 20686
0 380

fn=(614)
0 16
cfn=(192)
calls=2 0 
0 4
0 20
cfn=(616) _IO_file_stat
calls=2 0 
0 64
0 35
cfn=(620)
calls=2 0 
0 50
0 18
cfn=(622)
calls=2 0 
0 52
0 30

fn=(640)
0 1692

fn=(642)
0 658

fn=(656)
0 282
cfn=(192)
calls=47 0 
0 94
0 470
cfn=(658) _IO_old_init
calls=47 0 
0 1269
0 517

fn=(658)
0 1269

fn=(662)
0 2588

fn=(802)
0 25

fn=(444)
0 9
cfn=(192)
calls=1 0 
0 2
0 43

fn=(488)
0 5
cfn=(192)
calls=1 0 
0 2
0 13

fn=(578)
0 4333

fn=(580)
0 162
cfn=(192)
calls=18 0 
0 36
0 498

fn=(616)
0 20
cfn=(618)
calls=2 0 
0 40
0 4

fn=(630)
0 12
cob=(1)
cfi=(1)
cfn=(170)
calls=2 0 
0 4
0 8

fn=(670)
0 470
cfn=(192)
calls=94 0 
0 188
0 1316
cfn=(672)
calls=94 0 
0 12614
0 376

fn=(688)
0 7
cfn=(192)
calls=1 0 
0 2
0 72
cfn=(690)
calls=1 0 
0 161
0 5

fn=(766)
0 40
cfn=(192)
calls=4 0 
0 8
0 40
cfn=(768)
calls=4 0 
0 212
0 116

fn=(770)
0 8
cfn=(772)
calls=4 0 
0 48

fn=(778)
0 8
cfn=(192)
calls=2 0 
0 4
0 20
cfn=(780) vfprintf
calls=2 0 
0 2260
0 8

fn=(780)
0 18
cfn=(192)
calls=2 0 
0 4
0 62
cfn=(782)
calls=2 0 
0 197
0 34
cfn=(756)
calls=2 0 
0 448
0 40
cob=(3)
cfi=(3)
cfn=(674)
calls=2 0 
0 34
0 184
cob=(3)
cfi=(3)
cfn=(666)
calls=2 0 
0 44
0 22
cfn=(782)
calls=2 0 
0 73
0 36
cfn=(756)
calls=2 0 
0 528
0 136
cfn=(756)
calls=2 0 
0 148
0 80
cfn=(784)
calls=2 0 
0 76
0 28

ob=(11)
fl=(11)
fn=(420)
0 5
cfn=(412) 0x00000397
calls=1 0 
0 2
0 8

fn=(412)
0 6

fn=(828)
0 5
cfn=(412)
calls=1 0 
0 2
0 10
cob=(4)
cfi=(4)
cfn=(842)
calls=1 0 
0 84
cob=(1)
cfi=(1)
cfn=(180)
calls=1 0 
0 840
0 14

ob=(4)
fl=(4)
fn=(780)
0 68

fn=(1006) __libc_fini
0 5
cfn=(192)
calls=1 0 
0 2
0 8

ob=(11)
fl=(11)
fn=(410)
0 4
cfn=(412)
calls=1 0 
0 2
0 9

ob=(1)
fl=(1)
fn=(64) 0x000172c7
0 48

fn=(96) access
0 10
cfn=(64)
calls=1 0 
0 2
0 6

fn=(116) version_check_doit
0 6
cfn=(4) 0x000172cb
calls=1 0 
0 2
0 6
cfn=(118) _dl_check_all_versions
calls=1 0 
0 21391
0 7

fn=(132) _dl_relocate_object
0 88
cfn=(4)
calls=11 0 
0 22
0 5126
cfn=(140) _dl_protect_relro
calls=5 0 
0 210
0 24326
cfn=(134) _dl_lookup_symbol_x
calls=131 0 
0 106649
0 2649
cfn=(38) memcpy
calls=1 0 
0 27
0 1891
cfn=(134)
calls=3 0 
0 2653
0 1351

fn=(136) do_lookup_x
0 1956
cfn=(4)
calls=163 0 
0 326
0 54486
cfn=(72) _dl_name_match_p
calls=190 0 
0 10883
0 7057
cfn=(138) check_match.8319
calls=148 0 
0 26838
0 856

fn=(148) _dl_sysdep_start_cleanup
0 4

fn=(150) _dl_unload_cache
0 4
cfn=(4)
calls=1 0 
0 2
0 10
cfn=(152) munmap
calls=1 0 
0 9
0 5

fn=(170)
0 48

fn=(180)
0 174
cfn=(182) _dl_fixup
calls=29 0 
0 30269
0 145

fn=(814) _dl_sort_fini
0 9
cfn=(4)
calls=1 0 
0 2
0 2450
cfn=(112) memmove
calls=8 0 
0 223
0 122

fn=(16) dl_main
0 6
cfn=(4)
calls=1 0 
0 2
0 14
cfn=(18) process_envvars
calls=1 0 
0 603
0 11
cfn=(24) _dl_new_object
calls=1 0 
0 309
0 190
cfn=(40) strcmp
calls=1 0 
0 9
0 215
cfn=(6) _dl_setup_hash
calls=1 0 
0 40
0 7
cfn=(42) _dl_discover_osversion
calls=1 0 
0 104
0 10
cfn=(46) _dl_init_paths
calls=1 0 
0 2195
0 3
cfn=(52) _dl_debug_initialize
calls=1 0 
0 36
0 56
cfn=(54) _dl_debug_state
calls=1 0 
0 4
0 15
cfn=(96)
calls=1 0 
0 18
0 19
cfn=(98) _dl_map_object_deps
calls=1 0 
0 53732
0 163
cfn=(114) _dl_receive_error
calls=1 0 
0 21455
0 7
cfn=(130) security_init
calls=1 0 
0 28
0 12
cfn=(146) _dl_allocate_tls_init
calls=1 0 
0 146
0 18
cfn=(132)
calls=1 0 
0 6910
0 8
cfn=(148)
calls=1 0 
0 4
0 6
cfn=(52)
calls=1 0 
0 28
0 2
cfn=(54)
calls=1 0 
0 4
0 1
cfn=(150)
calls=1 0 
0 30
0 266
cfn=(132)
calls=10 0 
0 138082
0 37
cfn=(144) _dl_add_to_slotinfo
calls=1 0 
0 28
0 107
cfn=(38)
calls=1 0 
0 45
0 17
cfn=(56) strsep
calls=1 0 
0 904
0 10
cfn=(56)
calls=2 0 
0 613
0 27
cfn=(58) do_preload
calls=2 0 
0 5411
0 33
cfn=(124) init_tls
calls=1 0 
0 801
0 7

fn=(48) _dl_important_hwcaps
0 6
cfn=(4)
calls=1 0 
0 2
0 1100
cfn=(12) strlen
calls=1 0 
0 21
0 157
cfn=(32) malloc
calls=1 0 
0 51
0 37
cfn=(50) mempcpy
calls=1 0 
0 16
0 8
cfn=(50)
calls=1 0 
0 16
0 46
cfn=(50)
calls=1 0 
0 15
0 24
cfn=(50)
calls=2 0 
0 30
0 359

fn=(56)
0 24
cfn=(4)
calls=3 0 
0 6
0 1487

fn=(86) read
0 90

fn=(4)
0 2524

fn=(66) __sigsetjmp
0 231

fn=(70) _dl_map_object
0 210
cfn=(4)
calls=21 0 
0 42
0 1656
cfn=(72)
calls=111 0 
0 8411
0 405
cfn=(74) index
calls=9 0 
0 593
0 28
cfn=(76) expand_dynamic_string_token
calls=2 0 
0 874
0 26
cfn=(82) open_verify
calls=2 0 
0 299
0 222
cfn=(88) _dl_map_object_from_fd
calls=9 0 
0 16908
0 104
cfn=(12)
calls=7 0 
0 333
0 168
cfn=(102) cache_rpath
calls=7 0 
0 127
0 49
cfn=(104) _dl_load_cache_lookup
calls=7 0 
0 11808
0 133
cfn=(82)
calls=7 0 
0 1304
0 42
cfn=(78) local_strdup
calls=7 0 
0 1188
0 384
cfn=(102)
calls=23 0 
0 335
0 172
cfn=(102)
calls=7 0 
0 91
0 738
cfn=(40)
calls=61 0 
0 1291
0 183

fn=(78)
0 45
cfn=(4)
calls=9 0 
0 18
0 54
cfn=(12)
calls=9 0 
0 614
0 27
cfn=(32)
calls=9 0 
0 502
0 72
cfn=(38)
calls=9 0 
0 266
0 54

fn=(90) __fxstat64
0 60
cfn=(4)
calls=10 0 
0 20
0 100

fn=(142) mprotect
0 50

fn=(156) 0x00000800
0 2

fn=(38)
0 1169

fn=(76)
0 10
cfn=(4)
calls=2 0 
0 4
0 16
cfn=(74)
calls=2 0 
0 362
0 18
cfn=(78)
calls=2 0 
0 464

fn=(134)
0 2119
cfn=(4)
calls=163 0 
0 326
0 26732
cfn=(136)
calls=163 0 
0 102402
0 5389

fn=(160) _dl_init
0 7
cfn=(4)
calls=1 0 
0 2
0 26
cfn=(162) call_init
calls=1 0 
0 34
0 90
cfn=(162)
calls=10 0 
0 8271
0 35
cfn=(162)
calls=1 0 
0 9451
0 3

fn=(6)
0 88
cfn=(4)
calls=11 0 
0 22
0 330

fn=(8) _dl_sysdep_start
0 8
cfn=(4)
calls=1 0 
0 2
0 486
cfn=(10) brk
calls=1 0 
0 21
0 7
cfn=(14) sbrk
calls=1 0 
0 26
0 11
cfn=(16)
calls=1 0 
0 232808
0 59
cfn=(12)
calls=1 0 
0 21
0 2

fn=(22) bcmp
0 12
cfn=(4)
calls=1 0 
0 2
0 22

fn=(32)
0 212
cfn=(4)
calls=53 0 
0 106
0 318
cfn=(36) __libc_memalign
calls=53 0 
0 1991
0 212

fn=(54)
0 8

fn=(68) map_doit
0 28
cfn=(70)
calls=2 0 
0 5163
0 10

fn=(88)
0 54
cfn=(4)
calls=9 0 
0 18
0 63
cfn=(52)
calls=9 0 
0 252
0 63
cfn=(90)
calls=9 0 
0 162
0 945
cfn=(24)
calls=9 0 
0 4958
0 1310
cfn=(110) _dl_next_tls_modid
calls=1 0 
0 21
0 1544
cfn=(80) mmap
calls=9 0 
0 207
0 549
cfn=(92) memset
calls=9 0 
0 2389
0 342
cfn=(80)
calls=9 0 
0 207
0 2649
cfn=(94) close
calls=1 0 
0 8
0 24
cfn=(94)
calls=8 0 
0 64
0 99
cfn=(6)
calls=9 0 
0 360
0 545
cfn=(80)
calls=3 0 
0 69
0 6

fn=(92)
0 2422

fn=(100) openaux
0 437
cfn=(70)
calls=19 0 
0 42961
0 133

fn=(120) _dl_check_map_versions
0 121
cfn=(4)
calls=11 0 
0 22
0 945
cfn=(72)
calls=95 0 
0 7162
0 946
cfn=(122) match_symbol
calls=2 0 
0 384
0 451
cfn=(122)
calls=41 0 
0 6957
0 1168
cfn=(28) calloc
calls=10 0 
0 813
0 2233

fn=(128) _dl_allocate_tls_storage
0 5
cfn=(4)
calls=1 0 
0 2
0 8
cfn=(36)
calls=1 0 
0 78
0 317
cfn=(28)
calls=1 0 
0 77
0 12

fn=(36)
0 324
cfn=(4)
calls=54 0 
0 108
0 1065
cfn=(80)
calls=4 0 
0 92
0 480

fn=(80)
0 598

fn=(98)
0 11
cfn=(4)
calls=1 0 
0 2
0 916
cfn=(74)
calls=19 0 
0 1466
0 228
cfn=(60) _dl_catch_error
calls=19 0 
0 44766
0 1416
cfn=(32)
calls=9 0 
0 459
0 108
cfn=(38)
calls=9 0 
0 261
0 54
cfn=(38)
calls=9 0 
0 261
0 470
cfn=(32)
calls=1 0 
0 51
0 2003
cfn=(112)
calls=8 0 
0 223
0 998
cfn=(38)
calls=1 0 
0 37
0 2

fn=(138)
0 1480
cfn=(4)
calls=148 0 
0 296
0 6114
cfn=(40)
calls=141 0 
0 11022
0 1853
cfn=(40)
calls=68 0 
0 5816
0 257

fn=(140)
0 25
cfn=(4)
calls=5 0 
0 10
0 90
cfn=(142)
calls=5 0 
0 50
0 35

fn=(146)
0 7
cfn=(4)
calls=1 0 
0 2
0 53
cfn=(50)
calls=1 0 
0 16
0 5
cfn=(92)
calls=1 0 
0 33
0 30

fn=(162)
0 108
cfn=(4)
calls=12 0 
0 24
0 280
cob=(2)
cfi=(2)
cfn=(406)
calls=1 0 
0 45
cob=(2)
cfi=(2)
cfn=(384)
calls=1 0 
0 45
cob=(2)
cfi=(2)
cfn=(362)
calls=1 0 
0 45
cob=(2)
cfi=(2)
cfn=(340)
calls=1 0 
0 45
cob=(2)
cfi=(2)
cfn=(318)
calls=1 0 
0 45
cob=(2)
cfi=(2)
cfn=(296)
calls=1 0 
0 45
cob=(2)
cfi=(2)
cfn=(274)
calls=1 0 
0 45
cob=(4)
cfi=(4)
cfn=(254)
calls=1 0 
0 7513
cob=(2)
cfi=(2)
cfn=(164)
calls=1 0 
0 9402
0 114

fn=(182)
0 232
cfn=(4)
calls=29 0 
0 58
0 1470
cfn=(134)
calls=29 0 
0 27666
0 843

fn=(812)
0 7
cfn=(4)
calls=1 0 
0 2
0 23
cob=(3)
cfi=(3)
cfn=(482)
calls=1 0 
0 41
0 172
cfn=(814)
calls=1 0 
0 2806
0 4
cob=(3)
cfi=(3)
cfn=(484)
calls=1 0 
0 51
0 146
cob=(4)
cfi=(4)
cfn=(1006)
calls=1 0 
0 15
0 62
cob=(2)
cfi=(2)
cfn=(984)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(962)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(940)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(918)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(896)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(874)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(852)
calls=1 0 
0 1233
cob=(2)
cfi=(2)
cfn=(826)
calls=1 0 
0 966
cob=(2)
cfi=(2)
cfn=(816)
calls=1 0 
0 29
0 188

fn=(18)
0 6
cfn=(4)
calls=1 0 
0 2
0 26
cfn=(20) _dl_next_ld_env_entry
calls=1 0 
0 127
0 2
cfn=(20)
calls=1 0 
0 313
0 85
cfn=(22)
calls=1 0 
0 36
0 6

fn=(44) uname
0 8

fn=(50)
0 278

fn=(60)
0 105
cfn=(4)
calls=21 0 
0 42
0 147
cfn=(62)
calls=21 0 
0 189
0 147
cfn=(66)
calls=21 0 
0 231
0 189
cfn=(100)
calls=19 0 
0 43531
cfn=(68)
calls=2 0 
0 5201
0 315

fn=(62)
0 23
cfn=(64)
calls=23 0 
0 46
0 138

fn=(74)
0 2421

fn=(82)
0 99
cfn=(4)
calls=9 0 
0 18
0 93
cfn=(84) open
calls=9 0 
0 90
0 108
cfn=(86)
calls=9 0 
0 90
0 1105

fn=(94)
0 80

fn=(108) _dl_cache_libcmp
0 8372

fn=(126) _dl_determine_tlsoffset
0 6
cfn=(4)
calls=1 0 
0 2
0 81

fn=(152)
0 9

fn=(2) _dl_start
0 7
cfn=(4)
calls=1 0 
0 2
0 361
cfn=(6)
calls=1 0 
0 40
0 17
cfn=(8)
calls=1 0 
0 233451
0 352

fn=(10)
0 5
cfn=(4)
calls=1 0 
0 2
0 14

fn=(14)
0 5
cfn=(4)
calls=1 0 
0 2
0 19

fn=(20)
0 440

fn=(28)
0 198
cfn=(4)
calls=22 0 
0 44
0 198
cfn=(32)
calls=22 0 
0 1215
0 132

fn=(0) 0x00000810
0 2
cfn=(2)
calls=1 0 
0 234230
0 2
cfn=(156)
calls=1 0 
0 2
0 17
cfn=(160)
calls=1 0 
0 17919
0 3
cob=(12)
cfi=(12)
cfn=(430)
calls=1 0 
0 8503990664

fn=(24)
0 60
cfn=(4)
calls=10 0 
0 20
0 80
cfn=(12)
calls=10 0 
0 541
0 120
cfn=(28)
calls=10 0 
0 820
0 180
cfn=(38)
calls=10 0 
0 272
0 1005
cfn=(12)
calls=9 0 
0 557
0 252
cfn=(32)
calls=9 0 
0 459
0 99
cfn=(50)
calls=9 0 
0 185
0 617

fn=(46)
0 6
cfn=(4)
calls=1 0 
0 2
0 9
cfn=(48)
calls=1 0 
0 1888
0 4
cfn=(32)
calls=1 0 
0 51
0 14
cfn=(32)
calls=1 0 
0 51
0 170

fn=(52)
0 55
cfn=(4)
calls=11 0 
0 22
0 239

fn=(84)
0 100

fn=(102)
0 553

fn=(130)
0 4
cfn=(4)
calls=1 0 
0 2
0 22

fn=(40)
0 33471

fn=(42)
0 6
cfn=(4)
calls=1 0 
0 2
0 15
cfn=(44)
calls=1 0 
0 8
0 73

fn=(104)
0 42
cfn=(4)
calls=7 0 
0 14
0 189
cfn=(40)
calls=7 0 
0 112
0 84
cfn=(40)
calls=21 0 
0 497
0 1268
cfn=(108)
calls=67 0 
0 7581
0 411
cfn=(106) _dl_sysdep_read_whole_file
calls=1 0 
0 110
0 310
cfn=(108)
calls=7 0 
0 791
0 399

fn=(106)
0 5
cfn=(4)
calls=1 0 
0 2
0 8
cfn=(84)
calls=1 0 
0 10
0 9
cfn=(90)
calls=1 0 
0 18
0 9
cfn=(94)
calls=1 0 
0 8
0 16
cfn=(80)
calls=1 0 
0 23
0 2

fn=(110)
0 5
cfn=(4)
calls=1 0 
0 2
0 14

fn=(112)
0 446

fn=(114)
0 5
cfn=(4)
calls=1 0 
0 2
0 7
cfn=(62)
calls=1 0 
0 9
0 9
cfn=(116)
calls=1 0 
0 21412
0 11

fn=(118)
0 9
cfn=(4)
calls=1 0 
0 2
0 134
cfn=(120)
calls=11 0 
0 21202
0 44

fn=(124)
0 7
cfn=(4)
calls=1 0 
0 2
0 19
cfn=(28)
calls=1 0 
0 77
0 82
cfn=(126)
calls=1 0 
0 89
0 1
cfn=(128)
calls=1 0 
0 499
0 25

fn=(144)
0 6
cfn=(4)
calls=1 0 
0 2
0 20

fn=(12)
0 2087

fn=(58)
0 12
cfn=(4)
calls=2 0 
0 4
0 36
cfn=(60)
calls=2 0 
0 5331
0 28

fn=(72)
0 3168
cfn=(4)
calls=396 0 
0 792
0 2376
cfn=(40)
calls=396 0 
0 3641
0 5276
cfn=(40)
calls=426 0 
0 7579
0 3624

fn=(122)
0 344
cfn=(4)
calls=43 0 
0 86
0 2977
cfn=(40)
calls=43 0 
0 3504
0 430

fn=(184)
0 4
cfn=(4)
calls=1 0 
0 2
0 8

totals: 8504258093
