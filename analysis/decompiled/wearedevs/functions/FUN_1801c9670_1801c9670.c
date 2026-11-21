/* FUN_1801c9670 @ 1801c9670 */

void * FUN_1801c9670(void *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  puVar1 = (undefined8 *)((longlong)param_2 + 0x30);
  uVar2 = *(ulonglong *)((longlong)param_2 + 0x30);
  uVar11 = 6;
  if ((longlong)uVar2 < 0) {
    uVar11 = uVar2 ^ 0x8000000000000000;
  }
  if (3 < uVar11) {
    if (uVar11 == 4) {
      lVar13 = 8;
    }
    else {
      if (uVar11 == 5) {
        lVar3 = *(longlong *)((longlong)param_2 + 0x38);
        lVar12 = 0x10;
        lVar13 = 0x20;
      }
      else {
        if (uVar2 != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)((longlong)param_2 + 0x38),uVar2,1);
        }
        lVar3 = *(longlong *)((longlong)param_2 + 0x48);
        lVar12 = 0x20;
        lVar13 = 0x30;
      }
      if (lVar3 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)((longlong)puVar1 + lVar12),lVar3,1);
      }
    }
    if (*(longlong *)((longlong)puVar1 + lVar13) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)((longlong)param_2 + lVar13 + 0x38),
                          *(longlong *)((longlong)puVar1 + lVar13),1);
    }
  }
  *(undefined8 *)((longlong)param_2 + 0x70) = param_3[8];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  uVar10 = param_3[7];
  *(undefined8 *)((longlong)param_2 + 0x60) = param_3[6];
  *(undefined8 *)((longlong)param_2 + 0x68) = uVar10;
  *(undefined8 *)((longlong)param_2 + 0x50) = uVar8;
  *(undefined8 *)((longlong)param_2 + 0x58) = uVar9;
  *(undefined8 *)((longlong)param_2 + 0x40) = uVar6;
  *(undefined8 *)((longlong)param_2 + 0x48) = uVar7;
  *puVar1 = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x38) = uVar5;
  memcpy(param_1,param_2,0xb0);
  return param_1;
}


