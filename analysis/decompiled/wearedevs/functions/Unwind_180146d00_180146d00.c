/* Unwind@180146d00 @ 180146d00 */

void Unwind_180146d00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0xfd) != '\0') && (**(longlong **)(param_2 + 0xd0) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0xd0);
    (**(code **)(**(longlong **)(param_2 + 0xd0) + 0x20))
              (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
               *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}


