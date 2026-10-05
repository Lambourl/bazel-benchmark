#include "bench/fib.hpp"

// RE Benchmark TU 1174 of 20000 (depth=28, stamp="default")
namespace bench_tu_1174 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1174>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1174
