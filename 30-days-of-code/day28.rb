n = gets.to_i
list_values = []

n.times do
  first_name, email_id = gets.strip.split

  if email_id.end_with?("@gmail.com")
    list_values << first_name
  end
end

list_values.sort.each do |name|
  puts name
end
