#include "bench/fib.hpp"

// RE Benchmark TU 17104 of 20000 (depth=28, stamp="default")
namespace bench_tu_17104 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17104>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17104
