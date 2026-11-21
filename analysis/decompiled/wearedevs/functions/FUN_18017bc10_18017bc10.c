/* FUN_18017bc10 @ 18017bc10 */

bool FUN_18017bc10(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 local_21;
  
  if (param_3 == 1000000000) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0xb8) == '\x01') {
LAB_18017bc62:
      if (*(char *)(lVar1 + 0xb6) != '\x02') goto LAB_18017bd05;
    }
    else if (*(char *)(lVar1 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar1 + 0xb8) = 1;
      goto LAB_18017bc62;
    }
    FUN_180168970(&local_21,param_1);
    bVar2 = true;
  }
  else {
    if (param_2 != 0 || param_3 != 0) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0xb8) != '\x01') {
        if (*(char *)(lVar1 + 0xb8) == '\x02') goto LAB_18017bce1;
        FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
        *(undefined1 *)(lVar1 + 0xb8) = 1;
      }
      if (*(char *)(lVar1 + 0xb6) == '\x02') {
LAB_18017bce1:
        cVar3 = FUN_1801795b0(&local_21,param_1,param_2,param_3);
        return cVar3 != '\x02';
      }
LAB_18017bd05:
      if (((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) ||
         (cVar3 = FUN_180200a50(), cVar3 != '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0("Cannot drop a runtime in a context where blocking is not allowed. This happens when a runtime is dropped from within an asynchronous context."
                      ,0x11b,&PTR_s_C__Users_burne__cargo_registry_s_180264390);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}


