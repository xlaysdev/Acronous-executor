/* Unwind@18004dce0 @ 18004dce0 */

void Unwind_18004dce0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1441);
  uVar2 = *(undefined1 *)(param_2 + 0x1442);
  if (*(char *)(param_2 + 0x1443) == '\0') {
    *(undefined1 *)(param_2 + 0x1445) = uVar2;
    *(undefined1 *)(param_2 + 0x1444) = uVar1;
    return;
  }
  FUN_180044700(*(undefined8 *)(param_2 + 0x1400));
  *(undefined1 *)(param_2 + 0x1445) = uVar2;
  *(undefined1 *)(param_2 + 0x1444) = uVar1;
  return;
}


