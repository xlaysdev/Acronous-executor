/* FUN_1800e5a30 @ 1800e5a30 */

undefined8 FUN_1800e5a30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("cannot poll Select twice",0x18,&PTR_s_C__Users_burne__cargo_registry_s_180215eb8)
    ;
  }
  lVar1 = *(longlong *)*param_1;
  if (*(char *)(lVar1 + 0x40) == '\0') {
    puVar4 = *(undefined8 **)*param_2;
    lVar3 = (*(code *)*puVar4)(((undefined8 *)*param_2)[1]);
    LOCK();
    cVar2 = *(char *)(lVar1 + 0x20);
    *(char *)(lVar1 + 0x20) = '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x18))(*(undefined8 *)(lVar1 + 0x18));
      }
      *(longlong *)(lVar1 + 0x10) = lVar3;
      *(undefined8 **)(lVar1 + 0x18) = puVar4;
      LOCK();
      *(undefined1 *)(lVar1 + 0x20) = 0;
      UNLOCK();
      if (*(char *)(lVar1 + 0x40) == '\0') {
        cVar2 = (**(code **)(((undefined8 *)param_1[1])[1] + 0x18))
                          (*(undefined8 *)param_1[1],param_2);
        if (cVar2 != '\0') {
          return 2;
        }
        lVar1 = *param_1;
        *param_1 = 0;
        if (lVar1 != 0) {
          return 1;
        }
        goto LAB_1800e5b1a;
      }
    }
    else {
      (**(code **)(lVar3 + 0x18))(puVar4);
    }
  }
  LOCK();
  cVar2 = *(char *)(lVar1 + 0x41);
  *(char *)(lVar1 + 0x41) = '\x01';
  UNLOCK();
  if (cVar2 == '\0') {
    LOCK();
    *(undefined1 *)(lVar1 + 0x41) = 0;
    UNLOCK();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    return 0;
  }
LAB_1800e5b1a:
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("internal error: entered unreachable code",0x28,
                &PTR_s_C__Users_burne__cargo_registry_s_180215ed0);
}


