#include "bench/fib.hpp"

// RE Benchmark TU 6241 of 20000 (depth=28, stamp="default")
namespace bench_tu_6241 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6241>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6241
