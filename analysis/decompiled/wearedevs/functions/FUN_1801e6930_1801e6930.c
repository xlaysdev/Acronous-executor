/* FUN_1801e6930 @ 1801e6930 */

void FUN_1801e6930(longlong param_1)

{
  code *pcVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1801e1f70(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FUN_1801d3420();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


