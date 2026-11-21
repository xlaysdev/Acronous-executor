/* FUN_180119590 @ 180119590 */

undefined4 * FUN_180119590(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  longlong local_38;
  
  lVar1 = *param_2;
  if (lVar1 == -0x7fffffffffffffff) {
    lVar5 = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    lVar4 = param_2[1];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar1 = param_2[3];
    *(longlong *)(param_1 + 4) = param_2[2];
    *(longlong *)(param_1 + 6) = lVar1;
    *param_1 = (int)lVar5;
    param_1[1] = uVar2;
    param_1[2] = (int)lVar4;
    param_1[3] = uVar3;
    lVar6 = param_3[1];
    lVar1 = param_3[2];
    if (lVar1 == 0) {
      lVar1 = *param_3;
      goto joined_r0x0001801196d3;
    }
    puVar7 = (undefined8 *)(lVar6 + 0x18);
    lVar5 = 1;
    do {
      if (puVar7[-3] != 0) {
        (**(code **)(puVar7[-3] + 0x20))(*puVar7,puVar7[-2],puVar7[-1]);
      }
      puVar7 = puVar7 + 4;
      bVar8 = lVar5 != lVar1;
      lVar5 = lVar5 + 1;
    } while (bVar8);
    param_2 = param_3;
  }
  else {
    *(longlong *)(param_1 + 4) = param_3[2];
    uVar2 = *(undefined4 *)((longlong)param_3 + 4);
    lVar5 = param_3[1];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_1 = (int)*param_3;
    param_1[1] = uVar2;
    param_1[2] = (int)lVar5;
    param_1[3] = uVar3;
    *(char *)(param_1 + 6) = (char)param_2[3];
    if (SBORROW8(0,lVar1)) {
      return param_1;
    }
    lVar6 = param_2[1];
    lVar1 = param_2[2];
    if (lVar1 != 0) {
      puVar7 = (undefined8 *)(lVar6 + 0x18);
      lVar5 = 1;
      do {
        if (puVar7[-3] != 0) {
          (**(code **)(puVar7[-3] + 0x20))(*puVar7,puVar7[-2],puVar7[-1]);
        }
        puVar7 = puVar7 + 4;
        bVar8 = lVar5 != lVar1;
        lVar5 = lVar5 + 1;
      } while (bVar8);
    }
  }
  lVar1 = *param_2;
joined_r0x0001801196d3:
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(lVar6,lVar1 << 5,8);
  }
  return param_1;
}


