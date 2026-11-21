/* FUN_1801e68b0 @ 1801e68b0 */

void FUN_1801e68b0(undefined8 param_1,undefined8 param_2)

{
  TypeDescriptor *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = &rust_panic::RTTI_Type_Descriptor;
  LOCK();
  DAT_1802fd85c = 0x1e6930;
  UNLOCK();
  LOCK();
  DAT_1802fd864 = 0x2fd648;
  UNLOCK();
  LOCK();
  DAT_1802fd64c = 0x2fd608;
  UNLOCK();
  LOCK();
  DAT_1802fd60c = 0x2fd628;
  UNLOCK();
  LOCK();
  DAT_1802fd620 = 0x1e6890;
  UNLOCK();
  local_18 = param_1;
  local_10 = param_2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_20,(ThrowInfo *)&DAT_1802fd858);
}


