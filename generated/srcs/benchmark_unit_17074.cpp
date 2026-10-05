#include "bench/fib.hpp"

// RE Benchmark TU 17074 of 20000 (depth=28, stamp="default")
namespace bench_tu_17074 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17074>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17074
