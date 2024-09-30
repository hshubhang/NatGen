from transformers import AutoTokenizer, AutoModelForSeq2SeqLM

tokenizer = AutoTokenizer.from_pretrained("saikatc/NatGen")
model = AutoModelForSeq2SeqLM.from_pretrained("saikatc/NatGen")

def run_model(input_text):
    inputs = tokenizer.encode(input_text, return_tensors="pt")
    outputs = model.generate(inputs, max_length=512)  # Adjust max_length as needed
    return tokenizer.decode(outputs[0], skip_special_tokens=True)

def process_file(input_file_path, output_file_path):
    # Read input C program from file
    with open(input_file_path, 'r') as file:
        input_text = file.read()

    result = run_model(input_text)

    with open(output_file_path, 'w') as file:
        file.write(result)

input_file_path = '/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/Python_Programs/demopy9.py'
output_file_path = '/Users/shubhanghasabnis/Masters/Classes/Fourth_Quarter/Project/NatGen/result.txt'
process_file(input_file_path, output_file_path)
