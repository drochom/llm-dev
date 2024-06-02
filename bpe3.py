def bpe3(tokens, vocab_size):

	assert vocab_size >= 256

	def max_pair(tokens):
		d = defaultdict(int)
		for x in range(len(tokens) - 1):
			d[(tokens[x], tokens[x+1])] += 1
		return max(d, key=d.get)

	def merge(tokens, pair, new_token):
		result = []
		i = 0
		while i < len(tokens):
			if i < len(tokens)-1 and pair[0] == tokens[i] and pair[1] == tokens[i+1]:
				result.append(new_token)
				i += 2
			else:
				result.append(tokens[i])
				i += 1
		return result

	for new_token in range(256, vocab_size):
		tokens = merge(tokens, max_pair(tokens), new_token)

	return tokens
