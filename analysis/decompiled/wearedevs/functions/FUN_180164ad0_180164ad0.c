/* FUN_180164ad0 @ 180164ad0 */

void FUN_180164ad0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = param_1 + 1;
  if (*param_1 == 0) {
    if (*(int *)(param_2 + 0x98) == 1000000000) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                    ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180260ec8);
    }
    if (*(char *)(param_2 + 0x88) != '\0') {
      return;
    }
    LOCK();
    uVar1 = *(undefined1 *)(param_2 + 0x88);
    *(undefined1 *)(param_2 + 0x88) = 1;
    UNLOCK();
    FUN_180170050(param_2 + 0x58,0xffffffffffffffff,uVar1);
    if (!SBORROW8(0,*plVar2)) goto LAB_180164b60;
    lVar3 = param_1[2];
  }
  else {
    if (!SBORROW8(0,*plVar2)) {
LAB_180164b60:
      FUN_180172460(plVar2,param_2);
      return;
    }
    lVar3 = param_1[2];
  }
  FUN_1801df5b0(lVar3 + 0x18);
  return;
}


