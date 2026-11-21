/* FUN_180143720 @ 180143720 */

void FUN_180143720(undefined1 *param_1,longlong *param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 uVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  
  uVar1 = param_2[1];
  uVar2 = ((longlong *)*param_2)[1];
  if (uVar1 < uVar2) {
    bVar7 = ~(-1 << (param_3 & 0x1f));
    lVar3 = *(longlong *)*param_2;
    bVar5 = *(byte *)(lVar3 + uVar1);
    param_2[1] = uVar1 + 1;
    bVar5 = bVar5 & bVar7;
    if (bVar5 != bVar7) {
      *(ulonglong *)(param_1 + 8) = (ulonglong)bVar5;
      uVar4 = 0;
      goto LAB_180143810;
    }
    if (uVar2 <= uVar1 + 1) goto LAB_18014380a;
    bVar5 = *(byte *)(lVar3 + 1 + uVar1);
    param_2[1] = uVar1 + 2;
    uVar6 = (ulonglong)(byte)((bVar5 & 0x7f) + bVar7);
    if (-1 < (char)bVar5) {
LAB_18014378e:
      *(ulonglong *)(param_1 + 8) = uVar6;
      uVar4 = 0;
      goto LAB_180143810;
    }
    if (uVar2 <= uVar1 + 2) goto LAB_18014380a;
    bVar5 = *(byte *)(lVar3 + 2 + uVar1);
    param_2[1] = uVar1 + 3;
    uVar6 = uVar6 + ((bVar5 & 0x7f) << 7);
    if (-1 < (char)bVar5) goto LAB_18014378e;
    if (uVar2 <= uVar1 + 3) goto LAB_18014380a;
    bVar5 = FUN_18015fd20(param_2);
    uVar6 = uVar6 + (ulonglong)(bVar5 & 0x7f) * 0x4000;
    if (-1 < (char)bVar5) goto LAB_18014378e;
    if (*(ulonglong *)(*param_2 + 8) <= (ulonglong)param_2[1]) goto LAB_18014380a;
    bVar5 = FUN_18015fd20(param_2);
    if (-1 < (char)bVar5) {
      uVar6 = uVar6 + (ulonglong)(bVar5 & 0x7f) * 0x200000;
      goto LAB_18014378e;
    }
    param_1[1] = 0xb;
  }
  else {
LAB_18014380a:
    param_1[1] = 1;
  }
  uVar4 = 1;
LAB_180143810:
  *param_1 = uVar4;
  return;
}


