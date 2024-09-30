import os
from transformers import AutoTokenizer, AutoModelForSeq2SeqLM

tokenizer = AutoTokenizer.from_pretrained("saikatc/NatGen")
model = AutoModelForSeq2SeqLM.from_pretrained("saikatc/NatGen")

def run_model(input_text):
    inputs = tokenizer.encode(input_text, return_tensors="pt")
    outputs = model.generate(inputs, max_length=512) 
    return tokenizer.decode(outputs[0], skip_special_tokens=True)

def process_file(input_file_path, output_file_path):
    with open(input_file_path, 'r') as file:
        input_text = file.read()
    result = run_model(input_text)
    with open(output_file_path, 'w') as file:
        file.write(result) 

def process_folder(input_folder_path, output_folder_path):
    for filename in os.listdir(input_folder_path):
        if filename.endswith('.cpp'):  
            input_file_path = os.path.join(input_folder_path, filename)
            output_file_path = os.path.join(output_folder_path, f"result_{filename}")
            process_file(input_file_path, output_file_path)

input_folder_path = '/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/C++_Programs/'
output_folder_path = '/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/C++_Programs/Results'
process_folder(input_folder_path, output_folder_path)
