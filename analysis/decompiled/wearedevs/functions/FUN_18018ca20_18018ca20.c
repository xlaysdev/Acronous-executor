/* FUN_18018ca20 @ 18018ca20 */

undefined8 * FUN_18018ca20(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    uVar3 = lVar2 * 0x20 - 0x20;
    puVar5 = puVar4;
    if ((~(uint)uVar3 & 0xe0) != 0) {
      lVar6 = -(ulonglong)(((uint)(uVar3 >> 5) & 0x7ffffff) + 1 & 7);
      puVar7 = puVar4;
      do {
        puVar5 = puVar7 + 4;
        *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        lVar6 = lVar6 + 1;
        puVar7 = puVar5;
      } while (lVar6 != 0);
    }
    if (0xdf < uVar3) {
      do {
        *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x4c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x54) = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x6c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x74) = 0;
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        *(undefined8 *)((longlong)puVar5 + 0x8c) = 0;
        *(undefined8 *)((longlong)puVar5 + 0x94) = 0;
        puVar5[0x14] = 0;
        puVar5[0x15] = 0;
        *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar5 + 0xb4) = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
        *(undefined8 *)((longlong)puVar5 + 0xcc) = 0;
        *(undefined8 *)((longlong)puVar5 + 0xd4) = 0;
        *(undefined8 *)((longlong)puVar5 + 0xec) = 0;
        *(undefined8 *)((longlong)puVar5 + 0xf4) = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5 = puVar5 + 0x20;
      } while (puVar5 != puVar4 + lVar2 * 4);
    }
  }
  if (param_4 == 1000000000) {
    do {
      puVar4 = *(undefined8 **)(param_2 + 0x18);
      uVar3 = FUN_18018d920(lVar1 + 0x10,puVar4,*(undefined8 *)(param_2 + 0x20),param_2);
      if ((uVar3 & 1) != 0) {
        return puVar4;
      }
    } while (puVar4 == (undefined8 *)0x0);
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar3 = FUN_18018d920(lVar1 + 0x10,puVar4,lVar2,param_2,param_3,param_4);
    puVar5 = (undefined8 *)0x0;
    if ((uVar3 & 1) != 0) {
      puVar5 = puVar4;
    }
  }
  return puVar5;
}


