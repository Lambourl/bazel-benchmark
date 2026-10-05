#include "bench/fib.hpp"

// RE Benchmark TU 7165 of 20000 (depth=28, stamp="default")
namespace bench_tu_7165 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7165>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7165
