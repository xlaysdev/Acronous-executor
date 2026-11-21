/* FUN_1801106c0 @ 1801106c0 */

undefined8 * FUN_1801106c0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  
  lVar3 = *param_2;
  piVar1 = (int *)(lVar3 + 0x130);
  LOCK();
  bVar10 = *(int *)(lVar3 + 0x130) == 0;
  if (bVar10) {
    *(int *)(lVar3 + 0x130) = 0x3fffffff;
  }
  UNLOCK();
  if (!bVar10) {
    FUN_180200630(piVar1);
  }
  puVar7 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = FUN_180200a50();
    bVar8 = bVar8 ^ 1;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x140);
  *(undefined8 *)(lVar3 + 0x140) = *param_3;
  *param_3 = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + 0x148);
  *(undefined8 *)(lVar3 + 0x148) = param_3[1];
  param_3[1] = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + 0x150);
  *(undefined8 *)(lVar3 + 0x150) = param_3[2];
  param_3[2] = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + 0x158);
  *(undefined8 *)(lVar3 + 0x158) = param_3[3];
  param_3[3] = uVar4;
  LOCK();
  *(longlong *)(lVar3 + 0x160) = *(longlong *)(lVar3 + 0x160) + 2;
  UNLOCK();
  if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = FUN_180200a50(), cVar9 == '\0')) {
    *(undefined1 *)(lVar3 + 0x138) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -0x3fffffff;
  UNLOCK();
  if (0x3fffffff < iVar2 + 0xc0000001U) {
    FUN_180200760(piVar1);
  }
  FUN_180171b10(lVar3 + 0x10);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = uVar6;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return param_1;
}


