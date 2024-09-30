def update_temperature ( current_temp, is_heating):
    target_temp = 25.0 if is_heating else 18.0
    print(f"Current Temperature: {current_temp}, Target Temperature: {target_temp}")

current_temperature = 20.0
heating_status = True  
update_temperature(current_temperature, heating_status)
