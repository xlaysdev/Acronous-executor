/* FUN_18016ad00 @ 18016ad00 */

bool FUN_18016ad00(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_2 + 0x58) == 0) {
    if (0x7ffffffffffffffe < (ulonglong)param_1[3]) {
      FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_1802604c0);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    if (param_1[6] == 0) {
      return *(char *)(*param_1 + 0x1d0) != '\0';
    }
  }
  return true;
}


