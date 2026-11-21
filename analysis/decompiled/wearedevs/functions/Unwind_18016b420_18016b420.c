/* Unwind@18016b420 @ 18016b420 */

void Unwind_18016b420(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_2 + 200);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  plVar1 = (longlong *)(lVar2 + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined8 *)(param_2 + 0xd0) = uVar3;
  *(undefined1 *)(param_2 + 0xdf) = 1;
  *(undefined1 *)(param_2 + 0xde) = 0;
  return;
}


