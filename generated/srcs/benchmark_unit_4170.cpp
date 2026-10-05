#include "bench/fib.hpp"

// RE Benchmark TU 4170 of 20000 (depth=28, stamp="default")
namespace bench_tu_4170 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4170>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4170
