/* FUN_180186740 @ 180186740 */

bool FUN_180186740(ulonglong param_1,uint param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined **in_stack_ffffffffffffffc8;
  undefined1 local_21;
  undefined1 *local_20;
  
  uVar2 = 0;
  if ((param_3 & 1) != 0) {
    uVar2 = param_4;
  }
  if (DAT_1802fd4f8 != 0) {
    local_21 = 1;
    local_20 = &local_21;
    in_stack_ffffffffffffffc8 = &PTR_s_C__Users_burne__cargo_registry_s_180265240;
    param_1 = param_1 & 0xffffffff;
    FUN_180200190(&DAT_1802fd4f8,0,&local_20,&DAT_1802650f8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180265240);
  }
  lVar1 = WSASocketW(param_1,param_2 & 0x3fffffff,uVar2,0,
                     (ulonglong)in_stack_ffffffffffffffc8 & 0xffffffff00000000,
                     param_2 >> 0x16 & 0x100 | 0x81);
  if (lVar1 == -1) {
    GetLastError();
  }
  return lVar1 == -1;
}


