/* FUN_1800acbd0 @ 1800acbd0 */

undefined8 FUN_1800acbd0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x18);
    lVar3 = *plVar2;
    while( true ) {
      if (lVar3 != 0) {
        *(longlong *)(lVar1 + 0x18) = lVar3;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: (*next).value.is_some()",0x29,&DAT_180208008);
      }
      if (*(longlong **)(lVar1 + 0x10) == plVar2) break;
      SwitchToThread();
      plVar2 = *(longlong **)(lVar1 + 0x18);
      lVar3 = *plVar2;
    }
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003dcd0(param_1);
        }
      }
      *param_1 = 0;
    }
    else {
      if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802108f8);
      }
      FUN_1801b4030(*param_1 + 0x48,*param_2);
      lVar1 = *param_1;
      if (lVar1 == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(lVar1 + 0x18);
      lVar3 = *plVar2;
      while( true ) {
        if (lVar3 != 0) {
          *(longlong *)(lVar1 + 0x18) = lVar3;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: (*next).value.is_some()",0x29,&DAT_180208008);
        }
        if (*(longlong **)(lVar1 + 0x10) == plVar2) break;
        SwitchToThread();
        plVar2 = *(longlong **)(lVar1 + 0x18);
        lVar3 = *plVar2;
      }
      if (*(longlong *)(lVar1 + 0x38) != 0) {
        return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      }
      plVar2 = (longlong *)*param_1;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18003dcd0(param_1);
        }
      }
    }
  }
  *param_1 = 0;
  return 0;
}


