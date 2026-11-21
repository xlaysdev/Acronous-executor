/* FUN_1801903c0 @ 1801903c0 */

ulonglong *
FUN_1801903c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  uVar5 = param_2 * 0x20;
  if (0x7ffffffffffffff8 < uVar5 || param_2 >> 0x3b != 0) {
    uVar4 = 0;
LAB_180190403:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar4,uVar5);
  }
  if (uVar5 == 0) {
    puVar1 = (undefined8 *)&DAT_00000008;
    puVar6 = puVar1;
    if (1 < param_2) goto LAB_18019043b;
LAB_180190462:
    puVar6 = puVar1;
    if (param_2 == 0) {
      uVar2 = 8;
      goto LAB_180190538;
    }
  }
  else {
    FUN_180027490();
    uVar4 = 8;
    puVar1 = (undefined8 *)thunk_FUN_1801d32d0(uVar5,8);
    if (puVar1 == (undefined8 *)0x0) goto LAB_180190403;
    puVar6 = puVar1;
    if (param_2 < 2) goto LAB_180190462;
LAB_18019043b:
    uVar2 = (ulonglong)((uint)(param_2 - 1) & 7);
    puVar1 = puVar6;
    if (6 < param_2 - 2) {
      uVar3 = param_2 - 1 & 0xfffffffffffffff8;
      do {
        *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
        *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
        puVar1[0x18] = 0;
        puVar1[0x19] = 0;
        *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
        *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
        puVar1[0x1c] = 0;
        puVar1[0x1d] = 0;
        puVar1 = puVar1 + 0x20;
        uVar3 = uVar3 - 8;
      } while (uVar3 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
    }
  }
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_180027490();
  uVar2 = thunk_FUN_1801d32d0(param_2 << 4,8);
  puVar1 = puVar6;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,param_2 << 4,param_3,param_4,uVar5,puVar6,uVar7);
  }
LAB_180190538:
  param_1[3] = (ulonglong)puVar1;
  param_1[4] = param_2;
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return param_1;
}


