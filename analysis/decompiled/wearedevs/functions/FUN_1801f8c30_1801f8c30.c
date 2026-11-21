/* FUN_1801f8c30 @ 1801f8c30 */

longlong * FUN_1801f8c30(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((char)param_1[2] != '\0') {
    return param_1;
  }
  lVar3 = 0;
  if (param_2 != (byte *)0x0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar3 = *(longlong *)(param_2 + 0x10);
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if ((*param_2 & 1) != 0) goto LAB_1801f8c7b;
  }
  plVar1 = (longlong *)FUN_1801dd4b0();
  if ((char)plVar1[2] == '\x01') {
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
  }
  else {
    lVar2 = FUN_1801dca90();
    plVar1[1] = lVar3;
    *(undefined1 *)(plVar1 + 2) = 1;
  }
  *plVar1 = lVar2 + 1;
LAB_1801f8c7b:
  *param_1 = lVar2;
  param_1[1] = lVar3;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}


