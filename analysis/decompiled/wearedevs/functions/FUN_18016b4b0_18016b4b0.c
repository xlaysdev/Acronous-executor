/* FUN_18016b4b0 @ 18016b4b0 */

void FUN_18016b4b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 unaff_BL;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261110);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  lVar3 = param_2;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = 0;
  }
  else {
    FUN_180168500();
    lVar2 = *(longlong *)(param_1 + 8) + 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xb8) == '\x01') {
LAB_18016b56e:
    cVar1 = *(char *)(lVar2 + 0xb4);
    unaff_BL = *(undefined1 *)(lVar2 + 0xb5);
    *(undefined2 *)(lVar2 + 0xb4) = 0x8001;
  }
  else {
    if (*(char *)(lVar2 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar2 + 0x70,FUN_18016d130,param_3,param_4,param_2,lVar3);
      *(undefined1 *)(lVar2 + 0xb8) = 1;
      goto LAB_18016b56e;
    }
    cVar1 = '\x02';
  }
  (*(code *)**(undefined8 **)(param_2 + 0x10))(param_2);
  if (cVar1 != '\x02') {
    if (*(char *)(lVar2 + 0xb8) != '\x01') {
      if (*(char *)(lVar2 + 0xb8) == '\x02') goto LAB_18016b5c3;
      FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar2 + 0xb8) = 1;
    }
    *(char *)(lVar2 + 0xb4) = cVar1;
    *(undefined1 *)(lVar2 + 0xb5) = unaff_BL;
  }
LAB_18016b5c3:
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261128);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  lVar3 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180261150);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


