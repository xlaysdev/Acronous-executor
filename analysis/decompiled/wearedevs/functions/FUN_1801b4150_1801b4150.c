/* FUN_1801b4150 @ 1801b4150 */

void FUN_1801b4150(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *local_28;
  ulonglong local_20;
  
  LOCK();
  lVar1 = *(longlong *)*param_1;
  *(longlong *)*param_1 = param_1[1];
  UNLOCK();
  local_20 = (ulonglong)((uint)lVar1 & 3);
  if (local_20 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201c9f(0,&local_20,&DAT_180285f58,0);
  }
  puVar4 = (undefined8 *)(lVar1 + -1);
  if (puVar4 != (undefined8 *)0x0) {
    local_20 = 1;
    do {
      puVar2 = (undefined8 *)puVar4[1];
      plVar3 = (longlong *)*puVar4;
      *puVar4 = 0;
      if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180285fe0);
      }
      *(undefined1 *)(puVar4 + 2) = 1;
      LOCK();
      lVar1 = plVar3[5];
      *(char *)(plVar3 + 5) = '\x01';
      UNLOCK();
      local_28 = plVar3;
      if ((char)lVar1 == -1) {
        WakeByAddressSingle(plVar3 + 5);
        LOCK();
        *local_28 = *local_28 + -1;
        lVar1 = *local_28;
        UNLOCK();
      }
      else {
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar1 = *plVar3;
        UNLOCK();
      }
      if (lVar1 == 0) {
        FUN_1801e3970(&local_28);
      }
      puVar4 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


