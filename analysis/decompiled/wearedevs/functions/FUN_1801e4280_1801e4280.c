/* FUN_1801e4280 @ 1801e4280 */

longlong FUN_1801e4280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong **local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  plVar2 = *(longlong **)*param_1;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar6 = *(longlong *)(lVar3 + 0x128);
  if (lVar6 == 0) {
    lVar5 = DAT_1802fd828;
    do {
      if (lVar5 == -1) {
        FUN_180200880();
        goto LAB_1801e4408;
      }
      lVar6 = lVar5 + 1;
      LOCK();
      bVar7 = lVar5 == DAT_1802fd828;
      if (bVar7) {
        DAT_1802fd828 = lVar6;
      }
      else {
        lVar5 = DAT_1802fd828;
      }
      UNLOCK();
    } while (!bVar7);
    *(longlong *)(lVar3 + 0x128) = lVar6;
    if (lVar6 != *plVar2) goto LAB_1801e4314;
  }
  else if (lVar6 != *plVar2) {
LAB_1801e4314:
    LOCK();
    bVar7 = *(char *)((longlong)plVar2 + 0xc) == '\0';
    if (bVar7) {
      *(char *)((longlong)plVar2 + 0xc) = '\x01';
    }
    UNLOCK();
    if (!bVar7) {
      FUN_180200390((longlong)plVar2 + 0xc);
    }
    *plVar2 = lVar6;
    *(undefined4 *)(plVar2 + 1) = 1;
    goto LAB_1801e432d;
  }
  if ((int)plVar2[1] == -1) {
LAB_1801e4408:
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("lock count overflow in reentrant mutexlibrary\\std\\src\\sync\\reentrant_lock.rs"
                  ,0x26,&DAT_1802901e8);
  }
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
LAB_1801e432d:
  local_60 = &local_48;
  local_58 = 0;
  local_48 = plVar2;
  cVar4 = FUN_1801ef150(&local_60,&PTR_LAB_18028eec8,param_2,param_3);
  if (cVar4 == '\0') {
    if (((uint)local_58 & 3) == 1) {
      local_50 = local_58 + -1;
      local_40 = *(undefined8 *)(local_58 + -1);
      local_38 = *(undefined8 **)(local_58 + 7);
      if ((code *)*local_38 != (code *)0x0) {
        (*(code *)*local_38)(local_40);
      }
      if (local_38[1] != 0) {
        thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
      }
      thunk_FUN_1801d3330(local_50,0x18,8);
    }
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    iVar1 = (int)*plVar2;
    lVar6 = 0;
  }
  else {
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("a formatting trait implementation returned an error when the underlying stream did not"
                    ,0xad,&PTR_s_library_std_src_io_mod_rs_18028ee20);
    }
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    iVar1 = (int)*plVar2;
    lVar6 = local_58;
  }
  if (iVar1 == 0) {
    *local_48 = 0;
    LOCK();
    cVar4 = *(char *)((longlong)local_48 + 0xc);
    *(char *)((longlong)local_48 + 0xc) = '\0';
    UNLOCK();
    if (cVar4 == '\x02') {
      WakeByAddressSingle((longlong)local_48 + 0xc);
    }
  }
  return lVar6;
}


