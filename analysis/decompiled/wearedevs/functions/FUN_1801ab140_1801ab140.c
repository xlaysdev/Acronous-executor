/* FUN_1801ab140 @ 1801ab140 */

void FUN_1801ab140(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1801dd4b0();
  if ((char)plVar1[2] == '\x01') {
    lVar2 = *plVar1;
    param_2 = plVar1[1];
  }
  else {
    lVar2 = FUN_1801dca90();
    plVar1[1] = param_2;
    *(undefined1 *)(plVar1 + 2) = 1;
  }
  *plVar1 = lVar2 + 1;
  *param_1 = 2;
  param_1[1] = lVar2;
  param_1[2] = param_2;
  return;
}


